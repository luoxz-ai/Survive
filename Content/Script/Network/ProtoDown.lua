
local class = class(GA.Network.Pbc, "ProtoDown")

class.ServerTimeUserCmd = function(msg)
    gWorld.NetworkMonitor:updateTime(msg.time)
end