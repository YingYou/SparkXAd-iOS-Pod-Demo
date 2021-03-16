//
//  BannerAdViewController.swift
//  SparkXAdDemo-Swift
//
//  Created by Wei yang on 2021/3/16.
//

import UIKit

class BannerAdViewController: UIViewController, SparkXAdBannerAdDelegate {
    
    private var _adView:SparkXAdBannerAdView?;
    private lazy var _statusLabel = UILabel();

    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
        
        self.navigationItem.title = "Banner"
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
        
        let load320x50Ad = UIButton(type:.custom)
        load320x50Ad.layer.borderWidth = 0.5;
        load320x50Ad.layer.cornerRadius = 8;
        load320x50Ad.layer.borderColor = UIColor.lightGray.cgColor
        load320x50Ad.translatesAutoresizingMaskIntoConstraints = false
        load320x50Ad.addTarget(self, action: #selector(self.load320x50Ad), for: .touchUpInside)
        load320x50Ad.setTitle("load 320x50 Banner", for: .normal)
        load320x50Ad.setTitleColor(UIColor.red, for: .normal)
        self.view.addSubview(load320x50Ad)
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "H:|-30-[load320x50Ad]-170-|", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["load320x50Ad":load320x50Ad]))
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "V:[_statusLabel]-20-[load320x50Ad(40)]", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["_statusLabel":_statusLabel,"load320x50Ad":load320x50Ad]))
        
        let load320x100Ad = UIButton(type:.custom)
        load320x100Ad.layer.borderWidth = 0.5;
        load320x100Ad.layer.cornerRadius = 8;
        load320x100Ad.layer.borderColor = UIColor.lightGray.cgColor
        load320x100Ad.translatesAutoresizingMaskIntoConstraints = false
        load320x100Ad.addTarget(self, action: #selector(self.load320x100Ad), for: .touchUpInside)
        load320x100Ad.setTitle("load 320x100 Banner", for: .normal)
        load320x100Ad.setTitleColor(UIColor.red, for: .normal)
        self.view.addSubview(load320x100Ad)
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "H:|-30-[load320x100Ad]-170-|", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["load320x100Ad":load320x100Ad]))
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "V:[load320x50Ad]-20-[load320x100Ad(40)]", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["load320x50Ad":load320x50Ad,"load320x100Ad":load320x100Ad]))
        
        let load320x90Ad = UIButton(type:.custom)
        load320x90Ad.layer.borderWidth = 0.5;
        load320x90Ad.layer.cornerRadius = 8;
        load320x90Ad.layer.borderColor = UIColor.lightGray.cgColor
        load320x90Ad.translatesAutoresizingMaskIntoConstraints = false
        load320x90Ad.addTarget(self, action: #selector(self.load320x100Ad), for: .touchUpInside)
        load320x90Ad.setTitle("load 320x90 Banner", for: .normal)
        load320x90Ad.setTitleColor(UIColor.red, for: .normal)
        self.view.addSubview(load320x90Ad)
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "H:|-30-[load320x90Ad]-170-|", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["load320x90Ad":load320x90Ad]))
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "V:[load320x100Ad]-20-[load320x90Ad(40)]", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["load320x100Ad":load320x100Ad,"load320x90Ad":load320x90Ad]))
        
        let load300x250Ad = UIButton(type:.custom)
        load300x250Ad.layer.borderWidth = 0.5;
        load300x250Ad.layer.cornerRadius = 8;
        load300x250Ad.layer.borderColor = UIColor.lightGray.cgColor
        load300x250Ad.translatesAutoresizingMaskIntoConstraints = false
        load300x250Ad.addTarget(self, action: #selector(self.load320x100Ad), for: .touchUpInside)
        load300x250Ad.setTitle("load 300x250 Banner", for: .normal)
        load300x250Ad.setTitleColor(UIColor.red, for: .normal)
        self.view.addSubview(load300x250Ad)
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "H:|-30-[load300x250Ad]-170-|", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["load300x250Ad":load300x250Ad]))
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "V:[load320x90Ad]-20-[load300x250Ad(40)]", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["load320x90Ad":load320x90Ad,"load300x250Ad":load300x250Ad]))
        
        let loadFitAd = UIButton(type:.custom)
        loadFitAd.layer.borderWidth = 0.5;
        loadFitAd.layer.cornerRadius = 8;
        loadFitAd.layer.borderColor = UIColor.lightGray.cgColor
        loadFitAd.translatesAutoresizingMaskIntoConstraints = false
        loadFitAd.addTarget(self, action: #selector(self.loadFitAd), for: .touchUpInside)
        loadFitAd.setTitle("load fit Banner", for: .normal)
        loadFitAd.setTitleColor(UIColor.red, for: .normal)
        self.view.addSubview(loadFitAd)
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "H:|-30-[loadFitAd]-170-|", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["loadFitAd":loadFitAd]))
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "V:[load300x250Ad]-20-[loadFitAd(40)]", options: NSLayoutConstraint.FormatOptions.init(), metrics: nil, views: ["load300x250Ad":load300x250Ad,"loadFitAd":loadFitAd]))
    }
    
    
    @objc func load320x50Ad(_ sender:UIButton) -> Void {
        let rect = CGRect.init(x: 0, y: 400, width: 320, height: 50)
        showBannerWithAdSize(size: kSXAdSize320x50, rect: rect)
        
    }

    @objc func load320x100Ad(_ sender:UIButton) ->Void {
        let rect = CGRect.init(x: 0, y: 400, width: 320, height: 100)
        showBannerWithAdSize(size: kSXAdSize320x100, rect: rect)
    }
    
    @objc func load320x90Ad(_ sender:UIButton) ->Void {
        let rect = CGRect.init(x: 0, y: 400, width: 320, height: 90)
        showBannerWithAdSize(size: kSXAdSize320x90, rect: rect)
    }
    
    @objc func load300x250Ad(_ sender:UIButton) ->Void {
        let rect = CGRect.init(x: 0, y: 400, width: 300, height: 250)
        showBannerWithAdSize(size: kSXAdSize300x250, rect: rect)
    }
    
    
    @objc func loadFitAd(_ sender:UIButton) ->Void {
        let rect = CGRect.init(x: 0, y: 400, width: 500, height: 100)
        showBannerWithAdSize(size: SXAdSizeFromCGSize(CGSize.init(width: 500, height: 100)), rect: rect)
    }
    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */
    
    func showBannerWithAdSize(size:SXAdSize,rect:CGRect) -> Void {
        for obj in self.view.subviews {
            if obj.isKind(of: SparkXAdBannerAdView.self) {
                obj.removeFromSuperview()
       
            }
        }
        
        _adView = SparkXAdBannerAdView.init(placementID: "546FF24D-08C6-91AB-FF0F-9C930521E406-1", adSize: size, rootViewController: self)
        _adView?.delegate = self
        _adView?.autoSwitchInterval = 30
        _adView?.frame = rect
       

            self.view.addSubview(_adView!)

        _adView?.loadAdAndShow()
        _statusLabel.text = "Loading......"
    }
    
///----SparkXAdBannerAdDelegate---
    
    func bannerViewClicked(_ bannerView: SparkXAdBannerAdView) {
       _statusLabel.text = "Ad Click";
    }
    
    func bannerViewWillExpose(_ bannerView: SparkXAdBannerAdView) {
        _statusLabel.text = "Ad Expose";
    }
    
    func bannerViewDidLoad(_ bannerView: SparkXAdBannerAdView) {
        _statusLabel.text = "Ad loaded";
    }
    
    func bannerViewDidPresentFullScreenModal(_ bannerView: SparkXAdBannerAdView) {
        
    }
    
    func bannerViewFailed(toLoad bannerView: SparkXAdBannerAdView, error: Error) {
        _statusLabel.text = "Ad loaded fail";
    }
    
    func bannerViewDidDismissFullScreenModal(_ bannerView: SparkXAdBannerAdView) {
        
    }
}

