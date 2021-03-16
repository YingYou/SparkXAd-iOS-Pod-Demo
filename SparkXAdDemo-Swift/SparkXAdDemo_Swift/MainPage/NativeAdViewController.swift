//
//  NativeAdViewController.swift
//  SparkXAdDemo-Swift
//
//  Created by Wei yang on 2021/3/16.
//

import UIKit

class NativeAdViewController: UIViewController ,SparkXAdNativeExpressAdDelegate{
    
    private var _nativeAd:SparkXNativeExpressAd?;
    private lazy var _statusLabel = UILabel();
    private lazy var _nativeView = UIView();

    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
        self.navigationItem.title = "Native"
        self.view.backgroundColor = .white;
        let safeTop = Double(self.navigationController?.view.safeAreaInsets.top ?? 0.0)
        _nativeView.frame = CGRect.init(x: 0, y: 280, width: self.view.frame.size.width, height: self.view.frame.size.width * 0.3)
        self.view.addSubview(_nativeView)
        
       
        _statusLabel.font = UIFont.init(name: "PingFang-SC", size: 16)
        _statusLabel.textColor = UIColor.red
        _statusLabel.textAlignment = .center
        _statusLabel.translatesAutoresizingMaskIntoConstraints = false
        _statusLabel.text = "Tap button to load and show Ad"
        self.view.addSubview(_statusLabel);
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "H:|-20-[_statusLabel]-20-|", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["_statusLabel":_statusLabel]))
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "V:|-top-[_statusLabel(25)]", options: NSLayoutConstraint.FormatOptions.init(), metrics: ["top":NSNumber.init(value:safeTop+100.0)], views: ["_statusLabel":_statusLabel]))
        
        let loadNativeAd = UIButton(type:.custom)
        loadNativeAd.layer.borderWidth = 0.5;
        loadNativeAd.layer.cornerRadius = 8;
        loadNativeAd.layer.borderColor = UIColor.lightGray.cgColor
        loadNativeAd.translatesAutoresizingMaskIntoConstraints = false
        loadNativeAd.addTarget(self, action: #selector(self.loadNativeAd), for: .touchUpInside)
        loadNativeAd.setTitle("Load Native Ad", for: .normal)
        loadNativeAd.setTitleColor(UIColor.red, for: .normal)
        self.view.addSubview(loadNativeAd)
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "H:|-30-[loadNativeAd]-170-|", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["loadNativeAd":loadNativeAd]))
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "V:[_statusLabel]-20-[loadNativeAd(40)]", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["_statusLabel":_statusLabel,"loadNativeAd":loadNativeAd]))
        
        let removeNativeAd = UIButton(type:.custom)
        removeNativeAd.layer.borderWidth = 0.5;
        removeNativeAd.layer.cornerRadius = 8;
        removeNativeAd.layer.borderColor = UIColor.lightGray.cgColor
        removeNativeAd.translatesAutoresizingMaskIntoConstraints = false
        removeNativeAd.addTarget(self, action: #selector(self.removeNativeAd), for: .touchUpInside)
        removeNativeAd.setTitle("removeNativeAd", for: .normal)
        removeNativeAd.setTitleColor(UIColor.red, for: .normal)
        self.view.addSubview(removeNativeAd)
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "H:|-30-[removeNativeAd]-170-|", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["removeNativeAd":removeNativeAd]))
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "V:[loadNativeAd]-20-[removeNativeAd(40)]", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["loadNativeAd":loadNativeAd,"removeNativeAd":removeNativeAd]))
    }
    

    @objc func loadNativeAd(_ sender:UIButton) -> Void {
        _nativeAd = SparkXNativeExpressAd.init(placementId: "546FF24D-08C6-91AB-FF0F-9C930521E406-4", adSize: _nativeView.frame.size)
        _nativeAd?.delegate = self
        _nativeAd?.load()
        
        _statusLabel.text = "Loading......"
        
    }
    
    @objc func removeNativeAd(_ sender:UIButton) -> Void {
        
        for obj in _nativeView.subviews {
            if obj.isKind(of: SparkXNativeExpressAdView.self) {
                obj.removeFromSuperview()
       
            }
        }
    }
    
    
    //MARK:----delegate
    func nativeExpressAdViewClosed(_ nativeExpressAdView: SparkXNativeExpressAdView) {
        
    }
    
    func nativeExpressAdViewClicked(_ nativeExpressAdView: SparkXNativeExpressAdView) {
        
    }
    
    func nativeExpressAdViewExposure(_ nativeExpressAdView: SparkXNativeExpressAdView) {
        _statusLabel.text = "Ad loaded exposure";
    }
    
    func nativeExpressAdViewRenderFail(_ nativeExpressAdView: SparkXNativeExpressAdView) {
        _statusLabel.text = "Ad loaded render fail";
    }
    
    func nativeExpressAdFail(toLoad nativeExpressAd: SparkXNativeExpressAd, error: Error) {
        _statusLabel.text = "Ad loaded fail";
    }
    
    func nativeExpressAdViewRenderSuccess(_ nativeExpressAdView: SparkXNativeExpressAdView) {
        _statusLabel.text = "Ad loaded render success";
    }
    
    func nativeExpressAdSuccess(toLoad nativeExpressAd: SparkXNativeExpressAd, views: [SparkXNativeExpressAdView]) {
        _statusLabel.text = "Ad loaded Success"
        let view:SparkXNativeExpressAdView = views[0]
        view.controller = self
        view .render()
        _nativeView .addSubview(view)
        view.frame = _nativeView.bounds
        
    }
    
    
    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */

}
