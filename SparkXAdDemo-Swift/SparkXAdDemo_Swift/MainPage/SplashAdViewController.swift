//
//  SplashAdViewController.swift
//  SparkXAdDemo-Swift
//
//  Created by Wei yang on 2021/3/16.
//

import UIKit

class SplashAdViewController: UIViewController ,SparkXAdSplashAdDelegate{
    
    private var _splashAd:SparkXAdSplashAd?;
    private lazy var _statusLabel = UILabel();

    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
        self.navigationItem.title = "Splash"
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
        
        let loadSplashAd = UIButton(type:.custom)
        loadSplashAd.layer.borderWidth = 0.5;
        loadSplashAd.layer.cornerRadius = 8;
        loadSplashAd.layer.borderColor = UIColor.lightGray.cgColor
        loadSplashAd.translatesAutoresizingMaskIntoConstraints = false
        loadSplashAd.addTarget(self, action: #selector(self.loadSplashAd), for: .touchUpInside)
        loadSplashAd.setTitle("Load Splash", for: .normal)
        loadSplashAd.setTitleColor(UIColor.red, for: .normal)
        self.view.addSubview(loadSplashAd)
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "H:|-30-[loadSplashAd]-170-|", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["loadSplashAd":loadSplashAd]))
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "V:[_statusLabel]-20-[loadSplashAd(40)]", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["_statusLabel":_statusLabel,"loadSplashAd":loadSplashAd]))
        
    }
    

    @objc func loadSplashAd(_ sender:UIButton) -> Void {
        
        let appdelegate:AppDelegate = UIApplication.shared.delegate as! AppDelegate
        _splashAd = SparkXAdSplashAd.init(placementId: "546FF24D-08C6-91AB-FF0F-9C930521E406-3")
        _splashAd?.delegate = self
        _splashAd?.show(fromRootViewController: (appdelegate.window?.rootViewController)!, withBottomView: nil)
        
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
