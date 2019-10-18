//
// Created by 4dage on 2019/10/18.
//

#ifndef MY_SLAM_MAPPOINT_H
#define MY_SLAM_MAPPOINT_H

namespace myslam{
    class Frame;
    class MapPoint{
    public:
        typedef shared_ptr<MapPoint> Ptr;
        unsigned long id_; //ID
        Vector3d pos_; //position in world
        Vector3d morm_;  //Normal of viewing direction
        Mat descriptor_; //Descriptor for matching
        int observed_times_; //being observed by feature matching algo.
        int correct_times_; //being an inliner in pose estimation

        MapPoint();
        MapPoint(long id, Vector3d position, Vector3d norm);

        //factory function
        static MapPoint::Ptr createMpPoint();
    };
}

#endif //MY_SLAM_MAPPOINT_H
