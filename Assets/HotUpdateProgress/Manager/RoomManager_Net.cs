
using UnityEngine;
using Mirror;


public class RoomManager_Net : NetworkRoomManager
{
    bool IsShowStartButton;

    public override void OnRoomServerPlayersReady()
    {
        if (Utils.IsHeadless())
        {
            base.OnRoomServerPlayersReady();
        }
        else
        {
            IsShowStartButton = true;
        }
    }

    public override void OnGUI()
    {
        base.OnGUI();

        if (allPlayersReady && IsShowStartButton  && GUI.Button(new Rect(150, 300, 120, 20), "START GAME"))
        {
            // set to false to hide it in the game scene
            IsShowStartButton = false;

            ServerChangeScene(GameplayScene);
        }
    }
}
