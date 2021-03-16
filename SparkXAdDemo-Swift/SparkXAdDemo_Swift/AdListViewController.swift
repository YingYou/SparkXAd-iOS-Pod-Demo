//
//  ViewController.swift
//  SparkXAdDemo-Swift
//
//  Created by Wei yang on 2021/3/16.
//

import UIKit

class AdListViewController: UIViewController,UITableViewDelegate,UITableViewDataSource {
    
    
    private let _items =  [
        ["title":"Native","class":"NativeAdViewController"],
        ["title":"Banner","class":"BannerAdViewController"],
        ["title":"Splash","class":"SplashAdViewController"],
        ["title":"Interstitial","class":"InterstitialAdViewController"],

    ];
    
    
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return _items.count;
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        var cell = tableView.dequeueReusableCell(withIdentifier: "abcCell")
        if (cell==nil) {
            cell = UITableViewCell();
            cell?.accessoryType = .disclosureIndicator;
            cell?.selectionStyle = .none;
        }
        let subData = _items[indexPath.row];
        cell?.textLabel?.text = subData["title"];
        return cell!;
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: true);
        let data = _items[indexPath.row];
        let name:String = data["class"]!
        if (name.count > 0){
            let namespace = Bundle.main.infoDictionary!["CFBundleExecutable"] as! String
            let cls:AnyObject = NSClassFromString(namespace + "." + name)!
            let viewControllerClass = cls as! UIViewController.Type
            let viewController = viewControllerClass.init()
            self.navigationController?.pushViewController(viewController, animated: true)

        }
        
    }
    


    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        let tableView = UITableView(frame: self.view.bounds, style: .grouped)
            tableView.delegate = self
            tableView.dataSource = self
        
        self.view.addSubview(tableView);
    }


}

