using System.Collections.Generic;
public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	public static readonly IReadOnlyList<string> PatchedAOTAssemblyList = new List<string>
	{
		"Cinemachine.dll",
		"Mirror.dll",
		"System.Core.dll",
		"System.dll",
		"UniTask.dll",
		"Unity.Addressables.dll",
		"Unity.Animation.Rigging.dll",
		"Unity.InputSystem.dll",
		"Unity.ResourceManager.dll",
		"UnityEngine.CoreModule.dll",
		"mscorlib.dll",
	};
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask.<>c<GameManager.<LoadGamePlayer>d__2>
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask<GameManager.<LoadGamePlayer>d__2>
	// Cysharp.Threading.Tasks.ITaskPoolNode<object>
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore<Cysharp.Threading.Tasks.AsyncUnit>
	// DelegateList<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>>
	// DelegateList<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object>>
	// DelegateList<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
	// DelegateList<float>
	// Mirror.Reader<Mirror.AddPlayerMessage>
	// Mirror.Reader<Mirror.ChangeOwnerMessage>
	// Mirror.Reader<Mirror.CommandMessage>
	// Mirror.Reader<Mirror.EntityStateMessage>
	// Mirror.Reader<Mirror.NetworkBehaviourSyncVar>
	// Mirror.Reader<Mirror.NetworkPingMessage>
	// Mirror.Reader<Mirror.NetworkPongMessage>
	// Mirror.Reader<Mirror.NotReadyMessage>
	// Mirror.Reader<Mirror.ObjectDestroyMessage>
	// Mirror.Reader<Mirror.ObjectHideMessage>
	// Mirror.Reader<Mirror.ObjectSpawnFinishedMessage>
	// Mirror.Reader<Mirror.ObjectSpawnStartedMessage>
	// Mirror.Reader<Mirror.ReadyMessage>
	// Mirror.Reader<Mirror.RpcMessage>
	// Mirror.Reader<Mirror.SceneMessage>
	// Mirror.Reader<Mirror.SpawnMessage>
	// Mirror.Reader<Mirror.TimeSnapshotMessage>
	// Mirror.Reader<System.ArraySegment<byte>>
	// Mirror.Reader<System.DateTime>
	// Mirror.Reader<System.Decimal>
	// Mirror.Reader<System.Guid>
	// Mirror.Reader<System.Nullable<System.DateTime>>
	// Mirror.Reader<System.Nullable<System.Decimal>>
	// Mirror.Reader<System.Nullable<System.Guid>>
	// Mirror.Reader<System.Nullable<UnityEngine.Color32>>
	// Mirror.Reader<System.Nullable<UnityEngine.Color>>
	// Mirror.Reader<System.Nullable<UnityEngine.LayerMask>>
	// Mirror.Reader<System.Nullable<UnityEngine.Matrix4x4>>
	// Mirror.Reader<System.Nullable<UnityEngine.Plane>>
	// Mirror.Reader<System.Nullable<UnityEngine.Quaternion>>
	// Mirror.Reader<System.Nullable<UnityEngine.Ray>>
	// Mirror.Reader<System.Nullable<UnityEngine.Rect>>
	// Mirror.Reader<System.Nullable<UnityEngine.Vector2>>
	// Mirror.Reader<System.Nullable<UnityEngine.Vector2Int>>
	// Mirror.Reader<System.Nullable<UnityEngine.Vector3>>
	// Mirror.Reader<System.Nullable<UnityEngine.Vector3Int>>
	// Mirror.Reader<System.Nullable<UnityEngine.Vector4>>
	// Mirror.Reader<System.Nullable<byte>>
	// Mirror.Reader<System.Nullable<double>>
	// Mirror.Reader<System.Nullable<float>>
	// Mirror.Reader<System.Nullable<int>>
	// Mirror.Reader<System.Nullable<long>>
	// Mirror.Reader<System.Nullable<sbyte>>
	// Mirror.Reader<System.Nullable<short>>
	// Mirror.Reader<System.Nullable<uint>>
	// Mirror.Reader<System.Nullable<ulong>>
	// Mirror.Reader<System.Nullable<ushort>>
	// Mirror.Reader<UnityEngine.Color32>
	// Mirror.Reader<UnityEngine.Color>
	// Mirror.Reader<UnityEngine.LayerMask>
	// Mirror.Reader<UnityEngine.Matrix4x4>
	// Mirror.Reader<UnityEngine.Plane>
	// Mirror.Reader<UnityEngine.Quaternion>
	// Mirror.Reader<UnityEngine.Ray>
	// Mirror.Reader<UnityEngine.Rect>
	// Mirror.Reader<UnityEngine.Vector2>
	// Mirror.Reader<UnityEngine.Vector2Int>
	// Mirror.Reader<UnityEngine.Vector3>
	// Mirror.Reader<UnityEngine.Vector3Int>
	// Mirror.Reader<UnityEngine.Vector4>
	// Mirror.Reader<byte>
	// Mirror.Reader<double>
	// Mirror.Reader<float>
	// Mirror.Reader<int>
	// Mirror.Reader<long>
	// Mirror.Reader<object>
	// Mirror.Reader<sbyte>
	// Mirror.Reader<short>
	// Mirror.Reader<uint>
	// Mirror.Reader<ulong>
	// Mirror.Reader<ushort>
	// Mirror.Writer<Mirror.AddPlayerMessage>
	// Mirror.Writer<Mirror.ChangeOwnerMessage>
	// Mirror.Writer<Mirror.CommandMessage>
	// Mirror.Writer<Mirror.EntityStateMessage>
	// Mirror.Writer<Mirror.NetworkPingMessage>
	// Mirror.Writer<Mirror.NetworkPongMessage>
	// Mirror.Writer<Mirror.NotReadyMessage>
	// Mirror.Writer<Mirror.ObjectDestroyMessage>
	// Mirror.Writer<Mirror.ObjectHideMessage>
	// Mirror.Writer<Mirror.ObjectSpawnFinishedMessage>
	// Mirror.Writer<Mirror.ObjectSpawnStartedMessage>
	// Mirror.Writer<Mirror.ReadyMessage>
	// Mirror.Writer<Mirror.RpcMessage>
	// Mirror.Writer<Mirror.SceneMessage>
	// Mirror.Writer<Mirror.SpawnMessage>
	// Mirror.Writer<Mirror.TimeSnapshotMessage>
	// Mirror.Writer<System.ArraySegment<byte>>
	// Mirror.Writer<System.DateTime>
	// Mirror.Writer<System.Decimal>
	// Mirror.Writer<System.Guid>
	// Mirror.Writer<System.Nullable<System.DateTime>>
	// Mirror.Writer<System.Nullable<System.Decimal>>
	// Mirror.Writer<System.Nullable<System.Guid>>
	// Mirror.Writer<System.Nullable<UnityEngine.Color32>>
	// Mirror.Writer<System.Nullable<UnityEngine.Color>>
	// Mirror.Writer<System.Nullable<UnityEngine.LayerMask>>
	// Mirror.Writer<System.Nullable<UnityEngine.Matrix4x4>>
	// Mirror.Writer<System.Nullable<UnityEngine.Plane>>
	// Mirror.Writer<System.Nullable<UnityEngine.Quaternion>>
	// Mirror.Writer<System.Nullable<UnityEngine.Ray>>
	// Mirror.Writer<System.Nullable<UnityEngine.Rect>>
	// Mirror.Writer<System.Nullable<UnityEngine.Vector2>>
	// Mirror.Writer<System.Nullable<UnityEngine.Vector2Int>>
	// Mirror.Writer<System.Nullable<UnityEngine.Vector3>>
	// Mirror.Writer<System.Nullable<UnityEngine.Vector3Int>>
	// Mirror.Writer<System.Nullable<UnityEngine.Vector4>>
	// Mirror.Writer<System.Nullable<byte>>
	// Mirror.Writer<System.Nullable<double>>
	// Mirror.Writer<System.Nullable<float>>
	// Mirror.Writer<System.Nullable<int>>
	// Mirror.Writer<System.Nullable<long>>
	// Mirror.Writer<System.Nullable<sbyte>>
	// Mirror.Writer<System.Nullable<short>>
	// Mirror.Writer<System.Nullable<uint>>
	// Mirror.Writer<System.Nullable<ulong>>
	// Mirror.Writer<System.Nullable<ushort>>
	// Mirror.Writer<UnityEngine.Color32>
	// Mirror.Writer<UnityEngine.Color>
	// Mirror.Writer<UnityEngine.LayerMask>
	// Mirror.Writer<UnityEngine.Matrix4x4>
	// Mirror.Writer<UnityEngine.Plane>
	// Mirror.Writer<UnityEngine.Quaternion>
	// Mirror.Writer<UnityEngine.Ray>
	// Mirror.Writer<UnityEngine.Rect>
	// Mirror.Writer<UnityEngine.Vector2>
	// Mirror.Writer<UnityEngine.Vector2Int>
	// Mirror.Writer<UnityEngine.Vector3>
	// Mirror.Writer<UnityEngine.Vector3Int>
	// Mirror.Writer<UnityEngine.Vector4>
	// Mirror.Writer<byte>
	// Mirror.Writer<double>
	// Mirror.Writer<float>
	// Mirror.Writer<int>
	// Mirror.Writer<long>
	// Mirror.Writer<object>
	// Mirror.Writer<sbyte>
	// Mirror.Writer<short>
	// Mirror.Writer<uint>
	// Mirror.Writer<ulong>
	// Mirror.Writer<ushort>
	// System.Action<UnityEngine.InputSystem.InputAction.CallbackContext>
	// System.Action<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,object>
	// System.Action<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>>
	// System.Action<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object>>
	// System.Action<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
	// System.Action<float>
	// System.Action<object,Mirror.AddPlayerMessage>
	// System.Action<object,Mirror.ChangeOwnerMessage>
	// System.Action<object,Mirror.CommandMessage>
	// System.Action<object,Mirror.EntityStateMessage>
	// System.Action<object,Mirror.NetworkPingMessage>
	// System.Action<object,Mirror.NetworkPongMessage>
	// System.Action<object,Mirror.NotReadyMessage>
	// System.Action<object,Mirror.ObjectDestroyMessage>
	// System.Action<object,Mirror.ObjectHideMessage>
	// System.Action<object,Mirror.ObjectSpawnFinishedMessage>
	// System.Action<object,Mirror.ObjectSpawnStartedMessage>
	// System.Action<object,Mirror.ReadyMessage>
	// System.Action<object,Mirror.RpcMessage>
	// System.Action<object,Mirror.SceneMessage>
	// System.Action<object,Mirror.SpawnMessage>
	// System.Action<object,Mirror.TimeSnapshotMessage>
	// System.Action<object,System.ArraySegment<byte>>
	// System.Action<object,System.DateTime>
	// System.Action<object,System.Decimal>
	// System.Action<object,System.Guid>
	// System.Action<object,System.Nullable<System.DateTime>>
	// System.Action<object,System.Nullable<System.Decimal>>
	// System.Action<object,System.Nullable<System.Guid>>
	// System.Action<object,System.Nullable<UnityEngine.Color32>>
	// System.Action<object,System.Nullable<UnityEngine.Color>>
	// System.Action<object,System.Nullable<UnityEngine.LayerMask>>
	// System.Action<object,System.Nullable<UnityEngine.Matrix4x4>>
	// System.Action<object,System.Nullable<UnityEngine.Plane>>
	// System.Action<object,System.Nullable<UnityEngine.Quaternion>>
	// System.Action<object,System.Nullable<UnityEngine.Ray>>
	// System.Action<object,System.Nullable<UnityEngine.Rect>>
	// System.Action<object,System.Nullable<UnityEngine.Vector2>>
	// System.Action<object,System.Nullable<UnityEngine.Vector2Int>>
	// System.Action<object,System.Nullable<UnityEngine.Vector3>>
	// System.Action<object,System.Nullable<UnityEngine.Vector3Int>>
	// System.Action<object,System.Nullable<UnityEngine.Vector4>>
	// System.Action<object,System.Nullable<byte>>
	// System.Action<object,System.Nullable<double>>
	// System.Action<object,System.Nullable<float>>
	// System.Action<object,System.Nullable<int>>
	// System.Action<object,System.Nullable<long>>
	// System.Action<object,System.Nullable<sbyte>>
	// System.Action<object,System.Nullable<short>>
	// System.Action<object,System.Nullable<uint>>
	// System.Action<object,System.Nullable<ulong>>
	// System.Action<object,System.Nullable<ushort>>
	// System.Action<object,UnityEngine.Color32>
	// System.Action<object,UnityEngine.Color>
	// System.Action<object,UnityEngine.LayerMask>
	// System.Action<object,UnityEngine.Matrix4x4>
	// System.Action<object,UnityEngine.Plane>
	// System.Action<object,UnityEngine.Quaternion>
	// System.Action<object,UnityEngine.Ray>
	// System.Action<object,UnityEngine.Rect>
	// System.Action<object,UnityEngine.Vector2>
	// System.Action<object,UnityEngine.Vector2Int>
	// System.Action<object,UnityEngine.Vector3>
	// System.Action<object,UnityEngine.Vector3Int>
	// System.Action<object,UnityEngine.Vector4>
	// System.Action<object,byte>
	// System.Action<object,double>
	// System.Action<object,float>
	// System.Action<object,int>
	// System.Action<object,long>
	// System.Action<object,object>
	// System.Action<object,sbyte>
	// System.Action<object,short>
	// System.Action<object,uint>
	// System.Action<object,ulong>
	// System.Action<object,ushort>
	// System.Action<object>
	// System.Collections.Generic.ArraySortHelper<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
	// System.Collections.Generic.ArraySortHelper<object>
	// System.Collections.Generic.Comparer<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
	// System.Collections.Generic.Comparer<object>
	// System.Collections.Generic.Dictionary.Enumerator<int,object>
	// System.Collections.Generic.Dictionary.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<int,object>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.KeyCollection<int,object>
	// System.Collections.Generic.Dictionary.KeyCollection<object,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<int,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.ValueCollection<int,object>
	// System.Collections.Generic.Dictionary.ValueCollection<object,object>
	// System.Collections.Generic.Dictionary<int,object>
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.EqualityComparer<int>
	// System.Collections.Generic.EqualityComparer<object>
	// System.Collections.Generic.HashSet.Enumerator<object>
	// System.Collections.Generic.HashSet<object>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<int,object>>
	// System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.ICollection<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
	// System.Collections.Generic.ICollection<object>
	// System.Collections.Generic.IComparer<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
	// System.Collections.Generic.IComparer<object>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<int,object>>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.IEnumerable<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
	// System.Collections.Generic.IEnumerable<object>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<int,object>>
	// System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.IEnumerator<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
	// System.Collections.Generic.IEnumerator<object>
	// System.Collections.Generic.IEqualityComparer<int>
	// System.Collections.Generic.IEqualityComparer<object>
	// System.Collections.Generic.IList<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
	// System.Collections.Generic.IList<object>
	// System.Collections.Generic.KeyValuePair<int,object>
	// System.Collections.Generic.KeyValuePair<object,object>
	// System.Collections.Generic.LinkedList.Enumerator<object>
	// System.Collections.Generic.LinkedList<object>
	// System.Collections.Generic.LinkedListNode<object>
	// System.Collections.Generic.List.Enumerator<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
	// System.Collections.Generic.List.Enumerator<object>
	// System.Collections.Generic.List<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
	// System.Collections.Generic.List<object>
	// System.Collections.Generic.ObjectComparer<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
	// System.Collections.Generic.ObjectComparer<object>
	// System.Collections.Generic.ObjectEqualityComparer<int>
	// System.Collections.Generic.ObjectEqualityComparer<object>
	// System.Collections.ObjectModel.ReadOnlyCollection<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
	// System.Collections.ObjectModel.ReadOnlyCollection<object>
	// System.Comparison<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
	// System.Comparison<object>
	// System.Func<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object>>
	// System.Func<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
	// System.Func<int>
	// System.Func<object,Mirror.AddPlayerMessage>
	// System.Func<object,Mirror.ChangeOwnerMessage>
	// System.Func<object,Mirror.CommandMessage>
	// System.Func<object,Mirror.EntityStateMessage>
	// System.Func<object,Mirror.NetworkBehaviourSyncVar>
	// System.Func<object,Mirror.NetworkPingMessage>
	// System.Func<object,Mirror.NetworkPongMessage>
	// System.Func<object,Mirror.NotReadyMessage>
	// System.Func<object,Mirror.ObjectDestroyMessage>
	// System.Func<object,Mirror.ObjectHideMessage>
	// System.Func<object,Mirror.ObjectSpawnFinishedMessage>
	// System.Func<object,Mirror.ObjectSpawnStartedMessage>
	// System.Func<object,Mirror.ReadyMessage>
	// System.Func<object,Mirror.RpcMessage>
	// System.Func<object,Mirror.SceneMessage>
	// System.Func<object,Mirror.SpawnMessage>
	// System.Func<object,Mirror.TimeSnapshotMessage>
	// System.Func<object,System.ArraySegment<byte>>
	// System.Func<object,System.DateTime>
	// System.Func<object,System.Decimal>
	// System.Func<object,System.Guid>
	// System.Func<object,System.Nullable<System.DateTime>>
	// System.Func<object,System.Nullable<System.Decimal>>
	// System.Func<object,System.Nullable<System.Guid>>
	// System.Func<object,System.Nullable<UnityEngine.Color32>>
	// System.Func<object,System.Nullable<UnityEngine.Color>>
	// System.Func<object,System.Nullable<UnityEngine.LayerMask>>
	// System.Func<object,System.Nullable<UnityEngine.Matrix4x4>>
	// System.Func<object,System.Nullable<UnityEngine.Plane>>
	// System.Func<object,System.Nullable<UnityEngine.Quaternion>>
	// System.Func<object,System.Nullable<UnityEngine.Ray>>
	// System.Func<object,System.Nullable<UnityEngine.Rect>>
	// System.Func<object,System.Nullable<UnityEngine.Vector2>>
	// System.Func<object,System.Nullable<UnityEngine.Vector2Int>>
	// System.Func<object,System.Nullable<UnityEngine.Vector3>>
	// System.Func<object,System.Nullable<UnityEngine.Vector3Int>>
	// System.Func<object,System.Nullable<UnityEngine.Vector4>>
	// System.Func<object,System.Nullable<byte>>
	// System.Func<object,System.Nullable<double>>
	// System.Func<object,System.Nullable<float>>
	// System.Func<object,System.Nullable<int>>
	// System.Func<object,System.Nullable<long>>
	// System.Func<object,System.Nullable<sbyte>>
	// System.Func<object,System.Nullable<short>>
	// System.Func<object,System.Nullable<uint>>
	// System.Func<object,System.Nullable<ulong>>
	// System.Func<object,System.Nullable<ushort>>
	// System.Func<object,UnityEngine.Color32>
	// System.Func<object,UnityEngine.Color>
	// System.Func<object,UnityEngine.LayerMask>
	// System.Func<object,UnityEngine.Matrix4x4>
	// System.Func<object,UnityEngine.Plane>
	// System.Func<object,UnityEngine.Quaternion>
	// System.Func<object,UnityEngine.Ray>
	// System.Func<object,UnityEngine.Rect>
	// System.Func<object,UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
	// System.Func<object,UnityEngine.Vector2>
	// System.Func<object,UnityEngine.Vector2Int>
	// System.Func<object,UnityEngine.Vector3>
	// System.Func<object,UnityEngine.Vector3Int>
	// System.Func<object,UnityEngine.Vector4>
	// System.Func<object,byte>
	// System.Func<object,double>
	// System.Func<object,float>
	// System.Func<object,int>
	// System.Func<object,long>
	// System.Func<object,object,object>
	// System.Func<object,object>
	// System.Func<object,sbyte>
	// System.Func<object,short>
	// System.Func<object,uint>
	// System.Func<object,ulong>
	// System.Func<object,ushort>
	// System.Func<object>
	// System.Predicate<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
	// System.Predicate<object>
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable.ConfiguredTaskAwaiter<object>
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable<object>
	// System.Runtime.CompilerServices.TaskAwaiter<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
	// System.Runtime.CompilerServices.TaskAwaiter<object>
	// System.Threading.Tasks.ContinuationResultTaskFromResultTask<object,object>
	// System.Threading.Tasks.ContinuationTaskFromResultTask<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
	// System.Threading.Tasks.ContinuationTaskFromResultTask<object>
	// System.Threading.Tasks.Task<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
	// System.Threading.Tasks.Task<object>
	// System.Threading.Tasks.TaskCompletionSource<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
	// System.Threading.Tasks.TaskCompletionSource<object>
	// System.Threading.Tasks.TaskFactory.<>c__DisplayClass35_0<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
	// System.Threading.Tasks.TaskFactory.<>c__DisplayClass35_0<object>
	// System.Threading.Tasks.TaskFactory<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
	// System.Threading.Tasks.TaskFactory<object>
	// UnityEngine.AddressableAssets.AddressablesImpl.<>c__DisplayClass79_0<object>
	// UnityEngine.Animations.Rigging.AnimationJobBinder<UnityEngine.Animations.Rigging.MultiAimConstraintJob,UnityEngine.Animations.Rigging.MultiAimConstraintData>
	// UnityEngine.Animations.Rigging.RigConstraint<UnityEngine.Animations.Rigging.MultiAimConstraintJob,UnityEngine.Animations.Rigging.MultiAimConstraintData,object>
	// UnityEngine.InputSystem.InputBindingComposite<UnityEngine.Vector2>
	// UnityEngine.InputSystem.InputBindingComposite<float>
	// UnityEngine.InputSystem.InputControl<UnityEngine.Vector2>
	// UnityEngine.InputSystem.InputControl<float>
	// UnityEngine.InputSystem.InputProcessor<UnityEngine.Vector2>
	// UnityEngine.InputSystem.InputProcessor<float>
	// UnityEngine.InputSystem.Utilities.InlinedArray<object>
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase.<>c__DisplayClass60_0<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase.<>c__DisplayClass60_0<object>
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase.<>c__DisplayClass61_0<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase.<>c__DisplayClass61_0<object>
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase<object>
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object>
	// UnityEngine.ResourceManagement.ChainOperationTypelessDepedency<object>
	// UnityEngine.ResourceManagement.ResourceManager.CompletedOperation<object>
	// UnityEngine.ResourceManagement.Util.GlobalLinkedListNodeCache<object>
	// UnityEngine.ResourceManagement.Util.LinkedListNodeCache<object>
	// }}

	public void RefMethods()
	{
		// object Cinemachine.CinemachineVirtualCamera.GetCinemachineComponent<object>()
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,GameManager.<LoadGamePlayer>d__2>(System.Runtime.CompilerServices.TaskAwaiter<object>&,GameManager.<LoadGamePlayer>d__2&)
		// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder.Start<GameManager.<LoadGamePlayer>d__2>(GameManager.<LoadGamePlayer>d__2&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,UIManager.<OpenPanelAsync>d__14>(System.Runtime.CompilerServices.TaskAwaiter<object>&,UIManager.<OpenPanelAsync>d__14&)
		// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder<object>.Start<UIManager.<OpenPanelAsync>d__14>(UIManager.<OpenPanelAsync>d__14&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter,GameManager.<Awake>d__1>(Cysharp.Threading.Tasks.UniTask.Awaiter&,GameManager.<Awake>d__1&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>,UINetworkManager.<StartGame>d__7>(System.Runtime.CompilerServices.TaskAwaiter<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>&,UINetworkManager.<StartGame>d__7&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter<object>,PlayerController.<InitCharacterUI>d__29>(System.Runtime.CompilerServices.TaskAwaiter<object>&,PlayerController.<InitCharacterUI>d__29&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<GameManager.<Awake>d__1>(GameManager.<Awake>d__1&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<PlayerController.<InitCharacterUI>d__29>(PlayerController.<InitCharacterUI>d__29&)
		// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<UINetworkManager.<StartGame>d__7>(UINetworkManager.<StartGame>d__7&)
		// System.Threading.Tasks.Task<object> System.Threading.Tasks.Task<object>.ContinueWith<object>(System.Func<System.Threading.Tasks.Task<object>,object>,System.Threading.Tasks.TaskScheduler)
		// System.Threading.Tasks.Task<object> System.Threading.Tasks.Task<object>.ContinueWith<object>(System.Func<System.Threading.Tasks.Task<object>,object>,System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions)
		// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<UnityEngine.Vector2>(UnityEngine.Vector2&)
		// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<float>(float&)
		// int Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<UnityEngine.Vector2>()
		// int Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<float>()
		// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object> UnityEngine.AddressableAssets.Addressables.LoadAssetAsync<object>(object)
		// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object> UnityEngine.AddressableAssets.AddressablesImpl.LoadAssetAsync<object>(object)
		// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object> UnityEngine.AddressableAssets.AddressablesImpl.LoadAssetWithChain<object>(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,object)
		// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object> UnityEngine.AddressableAssets.AddressablesImpl.TrackHandle<object>(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object>)
		// object UnityEngine.Component.GetComponent<object>()
		// object UnityEngine.Component.GetComponentInChildren<object>()
		// object UnityEngine.Component.GetComponentInParent<object>()
		// object UnityEngine.GameObject.AddComponent<object>()
		// object UnityEngine.GameObject.GetComponent<object>()
		// UnityEngine.Vector2 UnityEngine.InputSystem.InputAction.ReadValue<UnityEngine.Vector2>()
		// float UnityEngine.InputSystem.InputAction.ReadValue<float>()
		// UnityEngine.Vector2 UnityEngine.InputSystem.InputAction.CallbackContext.ReadValue<UnityEngine.Vector2>()
		// UnityEngine.Vector2 UnityEngine.InputSystem.InputActionState.ApplyProcessors<UnityEngine.Vector2>(int,UnityEngine.Vector2,UnityEngine.InputSystem.InputControl<UnityEngine.Vector2>)
		// float UnityEngine.InputSystem.InputActionState.ApplyProcessors<float>(int,float,UnityEngine.InputSystem.InputControl<float>)
		// UnityEngine.Vector2 UnityEngine.InputSystem.InputActionState.ReadValue<UnityEngine.Vector2>(int,int,bool)
		// float UnityEngine.InputSystem.InputActionState.ReadValue<float>(int,int,bool)
		// object UnityEngine.Object.FindAnyObjectByType<object>()
		// object UnityEngine.Object.Instantiate<object>(object)
		// object UnityEngine.Object.Instantiate<object>(object,UnityEngine.Transform,bool)
		// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle.Convert<object>()
		// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object> UnityEngine.ResourceManagement.ResourceManager.CreateChainOperation<object>(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Func<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object>>)
		// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object> UnityEngine.ResourceManagement.ResourceManager.CreateCompletedOperationInternal<object>(object,bool,System.Exception,bool)
		// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object> UnityEngine.ResourceManagement.ResourceManager.CreateCompletedOperationWithException<object>(object,System.Exception)
		// object UnityEngine.ResourceManagement.ResourceManager.CreateOperation<object>(System.Type,int,UnityEngine.ResourceManagement.Util.IOperationCacheKey,System.Action<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>)
		// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object> UnityEngine.ResourceManagement.ResourceManager.ProvideResource<object>(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
		// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<object> UnityEngine.ResourceManagement.ResourceManager.StartOperation<object>(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase<object>,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
	}
}