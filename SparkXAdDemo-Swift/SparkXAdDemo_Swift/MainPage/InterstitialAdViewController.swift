//
//  InterstitialAdViewController.swift
//  SparkXAdDemo-Swift
//
//  Created by Wei yang on 2021/3/16.
//

import UIKit

class InterstitialAdViewController: UIViewController,SparkXAdInterstitialAdDelegate {
    
    private var _interstitial:SparkXAdInterstitialAd?;
    private lazy var _statusLabel = UILabel();

    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
        
        self.navigationItem.title = "Interstitial"
        self.view.backgroundColor = .white;
        
        let safeTop = Double(self.navigationController?.view.safeAreaInsets.top ?? 0.0)
        _statusLabel.font = UIFont.init(name: "PingFang-SC", size: 16)
        _statusLabel.textColor = UIColor.red
        _statusLabel.textAlignment = .center
        _statusLabel.translatesAutoresizingMaskIntoConstraints = false
        _statusLabel.text = "Tap button to load and show Ad"
        self.view.addSubview(_statusLabel);
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "H:|-20-[_statusLabel]-20-|", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["_statusLabel":_statusLabel]))
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "V:|-top-[_statusLabel(25)]", options: NSLayoutConstraint.FormatOptions.init(), metrics: ["top":NSNumber.init(value:safeTop+100.0)], views: ["_statusLabel":_statusLabel]))
        
        let loadInterstitialAd = UIButton(type:.custom)
        loadInterstitialAd.layer.borderWidth = 0.5;
        loadInterstitialAd.layer.cornerRadius = 8;
        loadInterstitialAd.layer.borderColor = UIColor.lightGray.cgColor
        loadInterstitialAd.translatesAutoresizingMaskIntoConstraints = false
        loadInterstitialAd.addTarget(self, action: #selector(self.loadInterstitialAd), for: .touchUpInside)
        loadInterstitialAd.setTitle("Load Interstitial", for: .normal)
        loadInterstitialAd.setTitleColor(UIColor.red, for: .normal)
        self.view.addSubview(loadInterstitialAd)
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "H:|-30-[loadInterstitialAd]-170-|", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["loadInterstitialAd":loadInterstitialAd]))
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "V:[_statusLabel]-20-[loadInterstitialAd(40)]", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["_statusLabel":_statusLabel,"loadInterstitialAd":loadInterstitialAd]))
        
        let showInterstitialAd = UIButton(type:.custom)
        showInterstitialAd.layer.borderWidth = 0.5;
        showInterstitialAd.layer.cornerRadius = 8;
        showInterstitialAd.layer.borderColor = UIColor.lightGray.cgColor
        showInterstitialAd.translatesAutoresizingMaskIntoConstraints = false
        showInterstitialAd.addTarget(self, action: #selector(self.showInterstitialAd), for: .touchUpInside)
        showInterstitialAd.setTitle("Show Interstitial", for: .normal)
        showInterstitialAd.setTitleColor(UIColor.red, for: .normal)
        self.view.addSubview(showInterstitialAd)
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "H:|-30-[showInterstitialAd]-170-|", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["showInterstitialAd":showInterstitialAd]))
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "V:[loadInterstitialAd]-20-[showInterstitialAd(40)]", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["loadInterstitialAd":loadInterstitialAd,"showInterstitialAd":showInterstitialAd]))
 
    }
    
    @objc func loadInterstitialAd(_ sender:UIButton) -> Void {
        _statusLabel.text = "Loading......";
        if _interstitial != nil {
            _interstitial?.delegate = nil
        }
        _interstitial = SparkXAdInterstitialAd.init(placementID: "546FF24D-08C6-91AB-FF0F-9C930521E406-2", adSize: SXAdSizeFromCGSize(CGSize.init(width: self.view.frame.width, height: self.view.frame.height)))
        _interstitial?.delegate = self
        _interstitial?.load()
    }

    @objc func showInterstitialAd(_ sender:UIButton) -> Void {
        if ((_interstitial?.isAdValid) != nil) {
            _interstitial?.present(fromRootViewController: self)
        }
    }
    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */
    
    ///---SparkXAdInterstitialAdDelegate

    func interstitialDidReceive(_ interstitialAd: SparkXAdInterstitialAd) {
        _statusLabel.text = "Ad loaded Success";
    }
    
    func interstitialAdDidClick(_ interstitialAd: SparkXAdInterstitialAd) {
        _statusLabel.text = "Ad Click";
    }
    
    func interstitialAdDidClose(_ interstitialAd: SparkXAdInterstitialAd) {
        _statusLabel.text = "Ad Close";
    }
    
    func interstitialAdDidExposed(_ interstitialAd: SparkXAdInterstitialAd) {
        _statusLabel.text = "Ad Exposed";
    }
    
    func didFailToReceiveAdWithError(_ interstitialAd: SparkXAdInterstitialAd, error: Error) {
        _statusLabel.text = "Ad loaded fail";
    }
    
    
}
