#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<UnityEngine.Experimental.XR.FrameReceivedEventArgs>
struct Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC;
// System.Action`1<UnityEngine.Experimental.XR.PlaneAddedEventArgs>
struct Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6;
// System.Action`1<UnityEngine.Experimental.XR.PlaneRemovedEventArgs>
struct Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991;
// System.Action`1<UnityEngine.Experimental.XR.PlaneUpdatedEventArgs>
struct Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6;
// System.Action`1<UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs>
struct Action_1_t62CF34AD78617EF5FE6E7FCE5803CBE14C103FBD;
// System.Action`1<UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs>
struct Action_1_tFA24ECAFB569947BC1D041AECE3FD63058B301F9;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>[]
struct EntryU5BU5D_tB55170D03AD2F207FC3F5C1887543E758489826F;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>[]
struct EntryU5BU5D_t859926B8B11FCBB1396C8DE53CA354315A1E88E4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>>[]
struct EntryU5BU5D_t8804D7633929A5555310A5AB85E45E902B4FC661;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>[]
struct EntryU5BU5D_t5C0EBA881C364CB16ECD59C5BA03C285F020C94C;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>[]
struct EntryU5BU5D_tED22745A83CB44F5B6A194A9E38154896CB07E8F;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>[]
struct EntryU5BU5D_t6905BAA91CDA1049CFEAF45E9C3A7DE9600C20B0;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>[]
struct EntryU5BU5D_t6F30BAB9A4BBE7EBDC3A38182370241A636EB401;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>[]
struct EntryU5BU5D_t26AABC5691DCBE6C52D70462D5B4749A9612275B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>[]
struct EntryU5BU5D_t4FC18CE0E665D0040BB3F5B57DA51DAE9AC794D4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>[]
struct EntryU5BU5D_t62369860DF1B93A5FA7F954F65C1E5DF6A101D3D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>[]
struct EntryU5BU5D_tF31D738E3FA4E8D20FF52C41823DB62C5F7BF5E8;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate>[]
struct EntryU5BU5D_tCB2581883FB0BEF77BA787520C9156E1D16B7EB3;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>[]
struct EntryU5BU5D_t01E6C0CA927D7204D56376E25D93AABB080FC3CB;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>[]
struct EntryU5BU5D_t309D90841BD80E263010FCD019FC865989B3A657;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>>[]
struct EntryU5BU5D_t1C0DEC519B1B94568369C66E78736FF9C7FA698C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>
struct KeyCollection_t64CD71E1BBF68E229AF921D459464EFE4D938D02;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>
struct KeyCollection_tF772E037DDC019F5D739CE7D2C8189E2FBFBB822;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>>
struct KeyCollection_t3CD8C26B214B19A0A513578F79E4C5E844D77DD1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>
struct KeyCollection_t1EAD6F396203244A652476AAF68E537B5F68FFD2;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct KeyCollection_tE861E5DEF7D7158F9F08A2CF373FB8195C83E6EE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>
struct KeyCollection_tCA38842A0E7EC6CBC9AEFB931E419094989B4A7A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>
struct KeyCollection_t5C52FA77AC016B36CB7B7A4CFB6C101EC400149B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct KeyCollection_tF3EEB6CBF29BB98F9DA89B752E5D58E399F779A9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>
struct KeyCollection_tCB4309FDAF979AD152F4347F0F33DCBEF86A947E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>
struct KeyCollection_t8781CBDEEAE9F4610606E221E42A30D7FED21036;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>
struct KeyCollection_t225708DAE30EFC8FD402BA591CE46185AE052303;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate>
struct KeyCollection_t33797ADCFA6F1D28CF8C5F0B806B7E40E01DC232;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>
struct KeyCollection_t0363A12B44AC4DCAFA1193ADA5A7236ADC6F41DF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>
struct KeyCollection_t1D3E062C8FB4A9814D7EBB086549D65502E18576;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>>
struct KeyCollection_tC80EC1474EA8EA0BEAC40E1825F2E5C26217A599;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>
struct ValueCollection_t043EE5D1622B1AF9994EA75162565C485E2C1456;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>
struct ValueCollection_t31F17AB47833C7CEE904AFE8FB27A0C98DFCD389;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>>
struct ValueCollection_t69E49670D59C9CFF8B1755829F6561D4D736DA68;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>
struct ValueCollection_t2E0CBB05029EA06490024E0669F1AFA4FE8F321F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct ValueCollection_t40DC99305534B1558C6D0FA6B213EA40A55D871D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>
struct ValueCollection_t52D14DA9532BB602D48DB8883286D37580FB9126;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>
struct ValueCollection_t981CDDE5AFD3A70D0BBF45B852BD14729754672B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct ValueCollection_t56E12DC2E19BEDFFB9C8F408D99D94B69AB918B6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>
struct ValueCollection_t6C07425162004681B85286337A767A4E022D7AD5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>
struct ValueCollection_tB1B57ADBB38482DF69C1BAFBD005B5FBBA58F35D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>
struct ValueCollection_t70211AF2B99F2C200028CE3638A6441966BCB7E4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate>
struct ValueCollection_tFB4AF408718AD5283C15F421797EE3B07A4BF49C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>
struct ValueCollection_t66DB416B596CAC89A398125291433074EE2AD61D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>
struct ValueCollection_tB6105FA62648906715C21A02B239F29DA2520B90;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>>
struct ValueCollection_t69F1735ECC809B962971F054A65AC7602CBFD87B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>
struct Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>
struct Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>>
struct Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>
struct Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>
struct Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>
struct Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>
struct Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>
struct Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>
struct Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate>
struct Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>
struct Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>
struct Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>>
struct Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t7EE965B791A606D187CCB69569A433D4CBB36879;
// System.Func`2<System.Object,System.IntPtr>
struct Func_2_t9337A412B4AB908C8351EAE403EB6C41DD521F46;
// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>
struct Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78;
// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>
struct Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD;
// System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>
struct Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7;
// System.Func`3<System.Object,System.Int32Enum,System.Boolean>
struct Func_3_t6392DC2203F787D95B49C4635E3583C79F8FB093;
// System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.Int32Enum>
struct Func_3_t02EAD622334675B6E9A4413BBFA96383CD4ADC0B;
// System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>
struct Func_3_t0D29C26AE23B5B7E40EA3E30649C33FF48CBA50B;
// System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>
struct Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8;
// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>
struct Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4;
// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>
struct Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9;
// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>
struct Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48;
// System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>
struct Func_3_tE51207E7A242422D97436D398CA19D150FF94581;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Experimental.ISubsystemDescriptor
struct ISubsystemDescriptor_tDF5EB3ED639A15690D2CB9993789BB21F24D3934;
// UnityEngine.Experimental.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0;
// UnityEngine.Experimental.IntegratedSubsystem`1<System.Object>
struct IntegratedSubsystem_1_t73613F32CADA1C0AD6BA0A43275D73052DCD5495;
// UnityEngine.Experimental.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor>
struct IntegratedSubsystem_1_t13F531EAA4D22C65C38F9A4EC080496DC444FC3D;
// UnityEngine.Experimental.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor>
struct IntegratedSubsystem_1_t5D53A066044FFF0B5A888DC279F870AE7CCE1AB6;
// UnityEngine.Experimental.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRReferencePointSubsystemDescriptor>
struct IntegratedSubsystem_1_tBC5DE3D32F4F7A2A85B915E23161D0E811F906AA;
// UnityEngine.Experimental.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRSessionSubsystemDescriptor>
struct IntegratedSubsystem_1_tD7024C556BEBF93D22C6C88F64A35242D4DEB369;
// UnityEngine.Experimental.XR.XRCameraSubsystem
struct XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701;
// UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor
struct XRCameraSubsystemDescriptor_t46972B2D1CC489288B72CD0856AB7675B5EEEE6D;
// UnityEngine.Experimental.XR.XRPlaneSubsystem
struct XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B;
// UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor
struct XRPlaneSubsystemDescriptor_t0F6814B2CAD6778836A3A230A200600556C57D7F;
// UnityEngine.Experimental.XR.XRReferencePointSubsystem
struct XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C;
// UnityEngine.Experimental.XR.XRReferencePointSubsystemDescriptor
struct XRReferencePointSubsystemDescriptor_t0228E77788DA1EAB18104D6AB3DBAF5AF5CFA0D3;
// UnityEngine.Experimental.XR.XRSessionSubsystem
struct XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F;
// UnityEngine.Experimental.XR.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tF69268DD404379B461569E4268BEC52FAFC9F3B9;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54;
// UnityEngine.XR.ARExtensions.DefaultCameraConfigApi
struct DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091;
// UnityEngine.XR.ARExtensions.DefaultCameraImageApi
struct DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB;
// UnityEngine.XR.ARExtensions.ICameraConfigApi
struct ICameraConfigApi_t5694F28C505D2CA91EF77838138F419261B240BA;
// UnityEngine.XR.ARExtensions.ICameraImageApi
struct ICameraImageApi_tBAC003481E172628D623F3F9E7CFB8D2FD84EEE4;
// UnityEngine.XR.ARExtensions.PlaneDetectionFlagsMaskAttribute
struct PlaneDetectionFlagsMaskAttribute_t891FFF72B896019B6EF9B5BC66B66B7482D85E36;
// UnityEngine.XR.ARExtensions.Promise`1<System.Int32Enum>
struct Promise_1_t86CAA07E2F0920F186E17389E61DF22419E422A1;
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionAvailability>
struct Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF;
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>
struct Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15;
// UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate
struct TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8;
// UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate
struct TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389;
// UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate
struct AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF;
// UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<System.Int32Enum>
struct AsyncDelegate_1_t6A92F8D83CC29E18956F23A772F33CDBB4FB0D0A;
// UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>
struct AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659;
// UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>
struct AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3;

extern RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_il2cpp_TypeInfo_var;
extern RuntimeClass* AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_il2cpp_TypeInfo_var;
extern RuntimeClass* CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447_il2cpp_TypeInfo_var;
extern RuntimeClass* Color_t119BCA590009762C7223FDD3AF9706653AC84ED2_il2cpp_TypeInfo_var;
extern RuntimeClass* DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091_il2cpp_TypeInfo_var;
extern RuntimeClass* DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_3_tE51207E7A242422D97436D398CA19D150FF94581_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var;
extern RuntimeClass* TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B_il2cpp_TypeInfo_var;
extern RuntimeClass* TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8_il2cpp_TypeInfo_var;
extern RuntimeClass* TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
extern RuntimeClass* XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var;
extern RuntimeClass* XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var;
extern RuntimeClass* XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var;
extern RuntimeClass* XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral21B987F677241B66E28A5D11D61261FDE1890ED3;
extern String_t* _stringLiteral803CB9B37A5D16493B12A6980F00E6EFC5F33114;
extern String_t* _stringLiteral8ACABC1B8A6A5FFEBE5548DF5488F4E557AC0AA4;
extern String_t* _stringLiteralB9BC357DEC96784E9811974A390666B2E82E6A6B;
extern String_t* _stringLiteralC28544CF6E443E95BB4A90955468E5F3F7D37199;
extern const RuntimeMethod* AsyncDelegate_1_Invoke_m106CF5901441272D1BAAA67E469EDCD5A05201EB_RuntimeMethod_var;
extern const RuntimeMethod* AsyncDelegate_1_Invoke_mE4C5BF27A0BA0E736BF0B6883E1FCE03CC2D94E4_RuntimeMethod_var;
extern const RuntimeMethod* AsyncDelegate_1__ctor_m178AD63E291123B72AEC9F7C35FA027D08840DC0_RuntimeMethod_var;
extern const RuntimeMethod* AsyncDelegate_1__ctor_m3FB654DEB58EFDC175AF92D33A92B4C3860D8476_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m16707E7385FD31BD4A1C11B5414CCCEDE1B55324_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m21D4F648E37C7E0EA81817958CCFAFDD3AA3CB5C_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2662F02533A78489FCB8E010E5FEBC06E3649B46_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2C97257910E6AD37DD7E2D0750D81DADE6E6E721_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m35D6E74C094AF3C4EAD40E9735DEB971762F0BE1_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m48C21C4B8491DCB1C5982E9B60A0E1ADF16CF12F_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m50FC80961BFFAF18A53884A6A9E034D3248EC5FB_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m643E732B084C22E10F428E442C63CABC97739D1B_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m6A85E7D2998C3CA167660D0E3A20B77125B1BF07_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m8179D7EB766B8F6178D683EBFCDE2E14781FCD4D_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mCC1CE03ACFDECEE395368B14E3B0FDAF6C93E24C_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mD2B5C280676BB7344912E08FB2D614016806F1F2_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mEB537A1B57E4CF73E858D74630BD0E13B4E5BE0B_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mEE5CDB5DF2AF290A068637D1D32112872F183809_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mFFD4C5AC6A89C26348842C16AEE9930EDA9A6D91_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m01338E12C6B5864D0BB16DA72226BDCE64738FB1_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m1020BBA7F3A266949B1A8B79FA4BE6C905DFE47C_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m23AF7E3B31A2AFD77A1221B9C6634984310CDFAB_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m267C95737EFF9A1CE9D7832B871642FF8F29705C_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m3810570CC05C47FBA418C223B89A285988EC0733_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m5D86F1BFFD50F0A56A458F57AB2747D1B8AF3E1C_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m73ABD1E1A16691C25D30237B64B3E3EF996D9715_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m89B8D7C9D79A6F5DC0964575BA22DEE998489C14_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m90C6195E1685E0FECE925DB1FC5B561053930193_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_mC496CD75F50E5A2BB38ACE821F49C0D3385D82E7_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_mD3C38ECC0584DE6AE25BBC1C70C18FAF1A8175AD_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_mE00C497C9CAE1ABDE120E68F538A4E8EE5CD0B1C_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_mF8E013984115986DB983BD7E1B7E75D9CAFCFF3E_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m61E59A212E6D58F5C791E61ED141BB754E02338E_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_mB1A7B68BFD8D0626F06D618BC846059C86F09F8D_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_mCFC3CF6D2965D5643F83C2F8C59FFFC859C1188F_RuntimeMethod_var;
extern const RuntimeMethod* Func_3_Invoke_m3D40CC159878F5E92BDC7BE11DA8167F3D75612B_RuntimeMethod_var;
extern const RuntimeMethod* Func_3_Invoke_m4F60ED5F0BABFB4F912C327D357E40C4BD46671B_RuntimeMethod_var;
extern const RuntimeMethod* Func_3_Invoke_m7D48EE1AECE9E364ABDC542EC70594B3461F6309_RuntimeMethod_var;
extern const RuntimeMethod* Func_3__ctor_m1C763DFF7E6A78C335AF3BD8F044F005DCADCD54_RuntimeMethod_var;
extern const RuntimeMethod* Func_3__ctor_m49911C9A2C73C5EF0BCCD24110DE90B1363183B6_RuntimeMethod_var;
extern const RuntimeMethod* Func_3__ctor_m51FEFFEF582D06C381792FE1E35C5C4CE1EF4184_RuntimeMethod_var;
extern const RuntimeMethod* Func_3__ctor_m60A1D11DC046E5AAC6161238DFEF40D3F1468256_RuntimeMethod_var;
extern const RuntimeMethod* Func_3__ctor_mC2E506B45E73329F595198888231F1EA2CF89E52_RuntimeMethod_var;
extern const RuntimeMethod* IntegratedSubsystem_1_get_SubsystemDescriptor_m44E538F2E84B8923688EDAD3A06C44DC5FDF892C_RuntimeMethod_var;
extern const RuntimeMethod* IntegratedSubsystem_1_get_SubsystemDescriptor_mAE9913A45DC61E5CA0A88DCEF4463FA10D858638_RuntimeMethod_var;
extern const RuntimeMethod* IntegratedSubsystem_1_get_SubsystemDescriptor_mD368E13F76695FE0CD6C9AF5A2DC8E0AE714413B_RuntimeMethod_var;
extern const RuntimeMethod* IntegratedSubsystem_1_get_SubsystemDescriptor_mF62CCD4746521AF905E114C9518FE70318CB8B8C_RuntimeMethod_var;
extern const RuntimeMethod* Promise_1_CreateResolvedPromise_m548F7D4E240E44FFBBB8D3942AF9ABD34C6DEE4A_RuntimeMethod_var;
extern const RuntimeMethod* Promise_1_CreateResolvedPromise_m7EC83AB3701AC7742546873D51CF5D0C5E39569C_RuntimeMethod_var;
extern const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisAsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3_m971FCCDF1603B10293982EB3DE754F833E20E460_RuntimeMethod_var;
extern const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisAsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_m6B2EADA8715B927389A7DC2E317017D443211AB6_RuntimeMethod_var;
extern const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisAttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_mE6C1581CC482A6DDE3B56CF374D299C1A20EEE0E_RuntimeMethod_var;
extern const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78_m45640912800E8166191496ABD621DBF457D02811_RuntimeMethod_var;
extern const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7_m12524AE49DF5A096121774F7DD9CE14EB9D85666_RuntimeMethod_var;
extern const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD_m6B87653F1782D4DAF6BACD80A771EE5B58CCA67F_RuntimeMethod_var;
extern const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48_m86C3C373C6A23EF1BFA66BF917DD9C153ACEAEEC_RuntimeMethod_var;
extern const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8_m1E26A24B42AB2655A75814162D16395391D05EFA_RuntimeMethod_var;
extern const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9_m6F581DD037A07EE0F8CA734146BBDC86CA5566C6_RuntimeMethod_var;
extern const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_tDF578AEA147B81628BA611F816D57E306CA287C4_mCB53B9BF241912777A76353D6DBE4B5A724BB92C_RuntimeMethod_var;
extern const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_tE51207E7A242422D97436D398CA19D150FF94581_mF767B3BB4324668A19D8E1B7FB615606D06BAFE6_RuntimeMethod_var;
extern const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisICameraConfigApi_t5694F28C505D2CA91EF77838138F419261B240BA_mE2CBE1BB4D605AE4A7572E748744F85EF99D8950_RuntimeMethod_var;
extern const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisICameraImageApi_tBAC003481E172628D623F3F9E7CFB8D2FD84EEE4_m082F1C83CF5A50364C1A2D40297567E068A3F297_RuntimeMethod_var;
extern const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisTryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8_m60505F9AC18687E966CC7ED3496A086F56ABFD18_RuntimeMethod_var;
extern const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisTryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_mA3D505049F576AA627FD977A5AD53EA2C62110DF_RuntimeMethod_var;
extern const RuntimeMethod* XRCameraExtensions_DefaultGetNativePtr_m5FB391B315530EFAB58CCF831FCBE3A6FA2BA81D_RuntimeMethod_var;
extern const RuntimeMethod* XRCameraExtensions_DefaultIsPermissionGranted_mEF72865F99D3DA98F9EC1898C62D6B57E0FFE505_RuntimeMethod_var;
extern const RuntimeMethod* XRCameraExtensions_DefaultTryGetColorCorrection_m1998DE2BB46D10F87B59F1BE0FA463F898D2FDDB_RuntimeMethod_var;
extern const RuntimeMethod* XRCameraExtensions_DefaultTryGetIntrinsics_mA2F93BFBD0D95DAE57DF7F5D16D7E994A93BC2F6_RuntimeMethod_var;
extern const RuntimeMethod* XRCameraExtensions_DefaultTrySetFocusMode_mFCABA60BEA3964850986E49F3E6D799652633DD6_RuntimeMethod_var;
extern const RuntimeMethod* XRCameraExtensions_TryGetColorCorrection_mF916E96F39B8E7EDDAEC17BF02448F03C6BF7B84_RuntimeMethod_var;
extern const RuntimeMethod* XRCameraExtensions_TrySetFocusMode_mC8592ACD3AC988398132D4DE48C09409CA647885_RuntimeMethod_var;
extern const RuntimeMethod* XRPlaneExtensions_DefaultGetNativePtr_mA8650CEE33AC97CC68A82A44D55E1B0DA2AE2FE0_RuntimeMethod_var;
extern const RuntimeMethod* XRPlaneExtensions_DefaultGetTrackingState_m109B0DC9AEC93FE64BC1C1364818F4FE8BD7BFBC_RuntimeMethod_var;
extern const RuntimeMethod* XRPlaneExtensions_DefaultTrySetPlaneDetectionFlags_mA14030F81B354F0B71694A0569E688BF311255B4_RuntimeMethod_var;
extern const RuntimeMethod* XRPlaneExtensions_GetTrackingState_m13B5E36C047B76ED18FFDE896FCA71A709D972C8_RuntimeMethod_var;
extern const RuntimeMethod* XRPlaneExtensions_TrySetPlaneDetectionFlags_mBBD8133ADBD3FAE83271E8A27966DF624CA433F8_RuntimeMethod_var;
extern const RuntimeMethod* XRReferencePointExtensions_AttachReferencePoint_m41702FD5DC29CDAACB3AC157FABDF68BC697D78C_RuntimeMethod_var;
extern const RuntimeMethod* XRReferencePointExtensions_DefaultAttachReferencePoint_m2BFDC9B9A85200B115298704ADE25A2CCD99C51A_RuntimeMethod_var;
extern const RuntimeMethod* XRReferencePointExtensions_DefaultGetNativePtr_mE50EA94147FB15F7F21CE97AA140BC8885A4C46F_RuntimeMethod_var;
extern const RuntimeMethod* XRSessionExtensions_DefaultGetAvailabilityAsync_mE0BE46A1C4A79123C9D1565734DF84C5228F347F_RuntimeMethod_var;
extern const RuntimeMethod* XRSessionExtensions_DefaultGetNativePtr_m7E8A6F7963C4D2F7188F3CA080A45722047CD369_RuntimeMethod_var;
extern const RuntimeMethod* XRSessionExtensions_DefaultInstallAsync_m3BADE4DD676472E851C6088B7DBFB3FD23EA51F8_RuntimeMethod_var;
extern const RuntimeMethod* XRSessionExtensions_GetAvailabilityAsync_mBDD84001B8806A80783567D7CD410405BB78D963_RuntimeMethod_var;
extern const RuntimeMethod* XRSessionExtensions_InstallAsync_m837E3721911B365903CB031F4D5DAF4B52132B84_RuntimeMethod_var;
extern const uint32_t AttachReferencePointDelegate_BeginInvoke_m9B4682C5E3C88E0C373307E185261804619B5FA3_MetadataUsageId;
extern const uint32_t CameraIntrinsics_Equals_m13D2C65BE0CFC69EEA170EF49F95600EDD913628_MetadataUsageId;
extern const uint32_t CameraIntrinsics_ToString_m81D09512AC198EE7B31AFBCD4CEF0E73FA2EFB98_MetadataUsageId;
extern const uint32_t TryGetColorCorrectionDelegate_BeginInvoke_m1BB5C2FFA2A8D2ED2DEF8F5BD8BBF33A9DA49200_MetadataUsageId;
extern const uint32_t TryGetIntrinsicsDelegate_BeginInvoke_mC39AC240F829BC8E2A71858509EA66D5F67AF16E_MetadataUsageId;
extern const uint32_t XRCameraExtensions_ActivateExtensions_m2292524D7A66F76A611DDA3121451813950F6614_MetadataUsageId;
extern const uint32_t XRCameraExtensions_DefaultGetNativePtr_m5FB391B315530EFAB58CCF831FCBE3A6FA2BA81D_MetadataUsageId;
extern const uint32_t XRCameraExtensions_RegisterCameraConfigApi_mB7AD2C2B66CB769D9245D4465AFFBBEE53FEDC1F_MetadataUsageId;
extern const uint32_t XRCameraExtensions_RegisterCameraImageApi_mB4066B0FFF787581964F3C0EEEC0F2A46474BA2A_MetadataUsageId;
extern const uint32_t XRCameraExtensions_RegisterGetNativePtrHandler_m75D282B40547D8493224A9889D48759E3FF0874B_MetadataUsageId;
extern const uint32_t XRCameraExtensions_RegisterIsPermissionGrantedHandler_m2A2352EF4DAF86AE18F6C3ACB9ACFD75D4D83913_MetadataUsageId;
extern const uint32_t XRCameraExtensions_RegisterTryGetIntrinsicsHandler_m569851368C811243DC8016E07DF4A0EEA714C1C2_MetadataUsageId;
extern const uint32_t XRCameraExtensions_RegisterTrySetFocusModeHandler_m72F2A926B7DCBE38C79A79B78071F26B76C878DE_MetadataUsageId;
extern const uint32_t XRCameraExtensions_SetDefaultDelegates_mB63CACD38F7D4F76522D95050460244E5F7A782D_MetadataUsageId;
extern const uint32_t XRCameraExtensions_TryGetColorCorrection_mF916E96F39B8E7EDDAEC17BF02448F03C6BF7B84_MetadataUsageId;
extern const uint32_t XRCameraExtensions_TrySetFocusMode_mC8592ACD3AC988398132D4DE48C09409CA647885_MetadataUsageId;
extern const uint32_t XRCameraExtensions__cctor_m631341108D89A0C9B7577D3D23327E641EADCFE2_MetadataUsageId;
extern const uint32_t XRPlaneExtensions_ActivateExtensions_m84A2B077D880A3B5D955083E9D0BBDC03AF0DE6F_MetadataUsageId;
extern const uint32_t XRPlaneExtensions_DefaultGetNativePtr_mA8650CEE33AC97CC68A82A44D55E1B0DA2AE2FE0_MetadataUsageId;
extern const uint32_t XRPlaneExtensions_GetTrackingState_m13B5E36C047B76ED18FFDE896FCA71A709D972C8_MetadataUsageId;
extern const uint32_t XRPlaneExtensions_RegisterGetNativePtrHandler_m627EF1AC13B30A153571C56443A55BC4710DA83A_MetadataUsageId;
extern const uint32_t XRPlaneExtensions_RegisterGetTrackingStateHandler_m2B39AFC8E80A49468B579280C2A9617D33A1D246_MetadataUsageId;
extern const uint32_t XRPlaneExtensions_RegisterTrySetPlaneDetectionFlagsHandler_mAE80CA3A384AA6B70C0BDC62CEEB4EB637A3EB2F_MetadataUsageId;
extern const uint32_t XRPlaneExtensions_SetDefaultDelegates_m3D2EC86AE11A50A8E84A8587D02DD8FE921D8B0F_MetadataUsageId;
extern const uint32_t XRPlaneExtensions_TrySetPlaneDetectionFlags_mBBD8133ADBD3FAE83271E8A27966DF624CA433F8_MetadataUsageId;
extern const uint32_t XRPlaneExtensions__cctor_m76632D6FF5B1011C82234C09B4D500F97F610FA1_MetadataUsageId;
extern const uint32_t XRReferencePointExtensions_ActivateExtensions_mA539EE90EE9922813356B830530633F843E99C17_MetadataUsageId;
extern const uint32_t XRReferencePointExtensions_AttachReferencePoint_m41702FD5DC29CDAACB3AC157FABDF68BC697D78C_MetadataUsageId;
extern const uint32_t XRReferencePointExtensions_DefaultAttachReferencePoint_m2BFDC9B9A85200B115298704ADE25A2CCD99C51A_MetadataUsageId;
extern const uint32_t XRReferencePointExtensions_DefaultGetNativePtr_mE50EA94147FB15F7F21CE97AA140BC8885A4C46F_MetadataUsageId;
extern const uint32_t XRReferencePointExtensions_RegisterAttachReferencePointHandler_mB7C3DE2A5321A262600E068CD47871D81D9B6ECD_MetadataUsageId;
extern const uint32_t XRReferencePointExtensions_RegisterGetNativePtrHandler_m98DA217E10EFAC941E71A826472E58A05450CA7E_MetadataUsageId;
extern const uint32_t XRReferencePointExtensions_SetDefaultDelegates_m096C9D166DEAA60FF2F81C69042689E001699C67_MetadataUsageId;
extern const uint32_t XRReferencePointExtensions__cctor_mA5668AAC068C68B90BD61052DAD4E1FA737FD0FE_MetadataUsageId;
extern const uint32_t XRSessionExtensions_ActivateExtensions_m42E643E5C243BDD5E1D303C5FE849FA766C4C919_MetadataUsageId;
extern const uint32_t XRSessionExtensions_DefaultGetAvailabilityAsync_mE0BE46A1C4A79123C9D1565734DF84C5228F347F_MetadataUsageId;
extern const uint32_t XRSessionExtensions_DefaultGetNativePtr_m7E8A6F7963C4D2F7188F3CA080A45722047CD369_MetadataUsageId;
extern const uint32_t XRSessionExtensions_DefaultInstallAsync_m3BADE4DD676472E851C6088B7DBFB3FD23EA51F8_MetadataUsageId;
extern const uint32_t XRSessionExtensions_GetAvailabilityAsync_mBDD84001B8806A80783567D7CD410405BB78D963_MetadataUsageId;
extern const uint32_t XRSessionExtensions_InstallAsync_m837E3721911B365903CB031F4D5DAF4B52132B84_MetadataUsageId;
extern const uint32_t XRSessionExtensions_RegisterGetAvailabilityAsyncHandler_mC166F78DA7D5249E8CF131F6BF6290A50475332E_MetadataUsageId;
extern const uint32_t XRSessionExtensions_RegisterGetNativePtrHandler_m89D4DE950CF44C520D6FEE56C5411DDF4FFB58B6_MetadataUsageId;
extern const uint32_t XRSessionExtensions_SetDefaultDelegates_m74F7CC39ACF2F34EC27D4EC79C7CC45D85A99542_MetadataUsageId;
extern const uint32_t XRSessionExtensions__cctor_mC73D1D140765ACA71BDCDA7472CFCE7DC799C9BA_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;


#ifndef U3CMODULEU3E_T9235715C8404A6E9A7653F6E7FFDB5E36D9C2D95_H
#define U3CMODULEU3E_T9235715C8404A6E9A7653F6E7FFDB5E36D9C2D95_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t9235715C8404A6E9A7653F6E7FFDB5E36D9C2D95 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T9235715C8404A6E9A7653F6E7FFDB5E36D9C2D95_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#define ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#ifndef DICTIONARY_2_T332B381ADD42E7894216EE28B27D48019ED7637B_H
#define DICTIONARY_2_T332B381ADD42E7894216EE28B27D48019ED7637B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>
struct  Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB55170D03AD2F207FC3F5C1887543E758489826F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t64CD71E1BBF68E229AF921D459464EFE4D938D02 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t043EE5D1622B1AF9994EA75162565C485E2C1456 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B, ___entries_1)); }
	inline EntryU5BU5D_tB55170D03AD2F207FC3F5C1887543E758489826F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB55170D03AD2F207FC3F5C1887543E758489826F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB55170D03AD2F207FC3F5C1887543E758489826F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B, ___keys_7)); }
	inline KeyCollection_t64CD71E1BBF68E229AF921D459464EFE4D938D02 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t64CD71E1BBF68E229AF921D459464EFE4D938D02 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t64CD71E1BBF68E229AF921D459464EFE4D938D02 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B, ___values_8)); }
	inline ValueCollection_t043EE5D1622B1AF9994EA75162565C485E2C1456 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t043EE5D1622B1AF9994EA75162565C485E2C1456 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t043EE5D1622B1AF9994EA75162565C485E2C1456 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T332B381ADD42E7894216EE28B27D48019ED7637B_H
#ifndef DICTIONARY_2_T707989CBAF49C089295D286B11265A8C639A7730_H
#define DICTIONARY_2_T707989CBAF49C089295D286B11265A8C639A7730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>
struct  Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t859926B8B11FCBB1396C8DE53CA354315A1E88E4* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF772E037DDC019F5D739CE7D2C8189E2FBFBB822 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t31F17AB47833C7CEE904AFE8FB27A0C98DFCD389 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730, ___entries_1)); }
	inline EntryU5BU5D_t859926B8B11FCBB1396C8DE53CA354315A1E88E4* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t859926B8B11FCBB1396C8DE53CA354315A1E88E4** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t859926B8B11FCBB1396C8DE53CA354315A1E88E4* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730, ___keys_7)); }
	inline KeyCollection_tF772E037DDC019F5D739CE7D2C8189E2FBFBB822 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF772E037DDC019F5D739CE7D2C8189E2FBFBB822 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF772E037DDC019F5D739CE7D2C8189E2FBFBB822 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730, ___values_8)); }
	inline ValueCollection_t31F17AB47833C7CEE904AFE8FB27A0C98DFCD389 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t31F17AB47833C7CEE904AFE8FB27A0C98DFCD389 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t31F17AB47833C7CEE904AFE8FB27A0C98DFCD389 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T707989CBAF49C089295D286B11265A8C639A7730_H
#ifndef DICTIONARY_2_TAD560473AB7821B978587ED1305391B72E86B1B7_H
#define DICTIONARY_2_TAD560473AB7821B978587ED1305391B72E86B1B7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>>
struct  Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8804D7633929A5555310A5AB85E45E902B4FC661* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3CD8C26B214B19A0A513578F79E4C5E844D77DD1 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t69E49670D59C9CFF8B1755829F6561D4D736DA68 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7, ___entries_1)); }
	inline EntryU5BU5D_t8804D7633929A5555310A5AB85E45E902B4FC661* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8804D7633929A5555310A5AB85E45E902B4FC661** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8804D7633929A5555310A5AB85E45E902B4FC661* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7, ___keys_7)); }
	inline KeyCollection_t3CD8C26B214B19A0A513578F79E4C5E844D77DD1 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3CD8C26B214B19A0A513578F79E4C5E844D77DD1 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3CD8C26B214B19A0A513578F79E4C5E844D77DD1 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7, ___values_8)); }
	inline ValueCollection_t69E49670D59C9CFF8B1755829F6561D4D736DA68 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t69E49670D59C9CFF8B1755829F6561D4D736DA68 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t69E49670D59C9CFF8B1755829F6561D4D736DA68 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TAD560473AB7821B978587ED1305391B72E86B1B7_H
#ifndef DICTIONARY_2_T03FC742469A2B251FF3680C63D1C74E74C66DECF_H
#define DICTIONARY_2_T03FC742469A2B251FF3680C63D1C74E74C66DECF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>
struct  Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5C0EBA881C364CB16ECD59C5BA03C285F020C94C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1EAD6F396203244A652476AAF68E537B5F68FFD2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2E0CBB05029EA06490024E0669F1AFA4FE8F321F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF, ___entries_1)); }
	inline EntryU5BU5D_t5C0EBA881C364CB16ECD59C5BA03C285F020C94C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5C0EBA881C364CB16ECD59C5BA03C285F020C94C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5C0EBA881C364CB16ECD59C5BA03C285F020C94C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF, ___keys_7)); }
	inline KeyCollection_t1EAD6F396203244A652476AAF68E537B5F68FFD2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1EAD6F396203244A652476AAF68E537B5F68FFD2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1EAD6F396203244A652476AAF68E537B5F68FFD2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF, ___values_8)); }
	inline ValueCollection_t2E0CBB05029EA06490024E0669F1AFA4FE8F321F * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2E0CBB05029EA06490024E0669F1AFA4FE8F321F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2E0CBB05029EA06490024E0669F1AFA4FE8F321F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T03FC742469A2B251FF3680C63D1C74E74C66DECF_H
#ifndef DICTIONARY_2_T2706E85D313DEF390F17DB6874CDDCEEE2DCB409_H
#define DICTIONARY_2_T2706E85D313DEF390F17DB6874CDDCEEE2DCB409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct  Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tED22745A83CB44F5B6A194A9E38154896CB07E8F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tE861E5DEF7D7158F9F08A2CF373FB8195C83E6EE * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t40DC99305534B1558C6D0FA6B213EA40A55D871D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409, ___entries_1)); }
	inline EntryU5BU5D_tED22745A83CB44F5B6A194A9E38154896CB07E8F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tED22745A83CB44F5B6A194A9E38154896CB07E8F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tED22745A83CB44F5B6A194A9E38154896CB07E8F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409, ___keys_7)); }
	inline KeyCollection_tE861E5DEF7D7158F9F08A2CF373FB8195C83E6EE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE861E5DEF7D7158F9F08A2CF373FB8195C83E6EE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE861E5DEF7D7158F9F08A2CF373FB8195C83E6EE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409, ___values_8)); }
	inline ValueCollection_t40DC99305534B1558C6D0FA6B213EA40A55D871D * get_values_8() const { return ___values_8; }
	inline ValueCollection_t40DC99305534B1558C6D0FA6B213EA40A55D871D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t40DC99305534B1558C6D0FA6B213EA40A55D871D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2706E85D313DEF390F17DB6874CDDCEEE2DCB409_H
#ifndef DICTIONARY_2_T4A9D89D64890F68FBC43DE2C012EE1C637F5C467_H
#define DICTIONARY_2_T4A9D89D64890F68FBC43DE2C012EE1C637F5C467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>
struct  Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6905BAA91CDA1049CFEAF45E9C3A7DE9600C20B0* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tCA38842A0E7EC6CBC9AEFB931E419094989B4A7A * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t52D14DA9532BB602D48DB8883286D37580FB9126 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467, ___entries_1)); }
	inline EntryU5BU5D_t6905BAA91CDA1049CFEAF45E9C3A7DE9600C20B0* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6905BAA91CDA1049CFEAF45E9C3A7DE9600C20B0** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6905BAA91CDA1049CFEAF45E9C3A7DE9600C20B0* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467, ___keys_7)); }
	inline KeyCollection_tCA38842A0E7EC6CBC9AEFB931E419094989B4A7A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCA38842A0E7EC6CBC9AEFB931E419094989B4A7A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCA38842A0E7EC6CBC9AEFB931E419094989B4A7A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467, ___values_8)); }
	inline ValueCollection_t52D14DA9532BB602D48DB8883286D37580FB9126 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t52D14DA9532BB602D48DB8883286D37580FB9126 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t52D14DA9532BB602D48DB8883286D37580FB9126 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T4A9D89D64890F68FBC43DE2C012EE1C637F5C467_H
#ifndef DICTIONARY_2_TE04FB6FCD228835F326ECDF3C5A21B523796BEB6_H
#define DICTIONARY_2_TE04FB6FCD228835F326ECDF3C5A21B523796BEB6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>
struct  Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6F30BAB9A4BBE7EBDC3A38182370241A636EB401* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t5C52FA77AC016B36CB7B7A4CFB6C101EC400149B * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t981CDDE5AFD3A70D0BBF45B852BD14729754672B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6, ___entries_1)); }
	inline EntryU5BU5D_t6F30BAB9A4BBE7EBDC3A38182370241A636EB401* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6F30BAB9A4BBE7EBDC3A38182370241A636EB401** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6F30BAB9A4BBE7EBDC3A38182370241A636EB401* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6, ___keys_7)); }
	inline KeyCollection_t5C52FA77AC016B36CB7B7A4CFB6C101EC400149B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5C52FA77AC016B36CB7B7A4CFB6C101EC400149B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5C52FA77AC016B36CB7B7A4CFB6C101EC400149B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6, ___values_8)); }
	inline ValueCollection_t981CDDE5AFD3A70D0BBF45B852BD14729754672B * get_values_8() const { return ___values_8; }
	inline ValueCollection_t981CDDE5AFD3A70D0BBF45B852BD14729754672B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t981CDDE5AFD3A70D0BBF45B852BD14729754672B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TE04FB6FCD228835F326ECDF3C5A21B523796BEB6_H
#ifndef DICTIONARY_2_TD67186A32F638C55B3D7E5D00AA532859F8B871D_H
#define DICTIONARY_2_TD67186A32F638C55B3D7E5D00AA532859F8B871D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct  Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t26AABC5691DCBE6C52D70462D5B4749A9612275B* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF3EEB6CBF29BB98F9DA89B752E5D58E399F779A9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t56E12DC2E19BEDFFB9C8F408D99D94B69AB918B6 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D, ___entries_1)); }
	inline EntryU5BU5D_t26AABC5691DCBE6C52D70462D5B4749A9612275B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t26AABC5691DCBE6C52D70462D5B4749A9612275B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t26AABC5691DCBE6C52D70462D5B4749A9612275B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D, ___keys_7)); }
	inline KeyCollection_tF3EEB6CBF29BB98F9DA89B752E5D58E399F779A9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF3EEB6CBF29BB98F9DA89B752E5D58E399F779A9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF3EEB6CBF29BB98F9DA89B752E5D58E399F779A9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D, ___values_8)); }
	inline ValueCollection_t56E12DC2E19BEDFFB9C8F408D99D94B69AB918B6 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t56E12DC2E19BEDFFB9C8F408D99D94B69AB918B6 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t56E12DC2E19BEDFFB9C8F408D99D94B69AB918B6 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TD67186A32F638C55B3D7E5D00AA532859F8B871D_H
#ifndef DICTIONARY_2_TECE8019B660D66E6B522360B0BF8F94254B823FF_H
#define DICTIONARY_2_TECE8019B660D66E6B522360B0BF8F94254B823FF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>
struct  Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4FC18CE0E665D0040BB3F5B57DA51DAE9AC794D4* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tCB4309FDAF979AD152F4347F0F33DCBEF86A947E * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6C07425162004681B85286337A767A4E022D7AD5 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF, ___entries_1)); }
	inline EntryU5BU5D_t4FC18CE0E665D0040BB3F5B57DA51DAE9AC794D4* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4FC18CE0E665D0040BB3F5B57DA51DAE9AC794D4** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4FC18CE0E665D0040BB3F5B57DA51DAE9AC794D4* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF, ___keys_7)); }
	inline KeyCollection_tCB4309FDAF979AD152F4347F0F33DCBEF86A947E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCB4309FDAF979AD152F4347F0F33DCBEF86A947E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCB4309FDAF979AD152F4347F0F33DCBEF86A947E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF, ___values_8)); }
	inline ValueCollection_t6C07425162004681B85286337A767A4E022D7AD5 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6C07425162004681B85286337A767A4E022D7AD5 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6C07425162004681B85286337A767A4E022D7AD5 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TECE8019B660D66E6B522360B0BF8F94254B823FF_H
#ifndef DICTIONARY_2_T6058911EEE43591076AB7625C4B87296D2B2E94F_H
#define DICTIONARY_2_T6058911EEE43591076AB7625C4B87296D2B2E94F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>
struct  Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t62369860DF1B93A5FA7F954F65C1E5DF6A101D3D* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t8781CBDEEAE9F4610606E221E42A30D7FED21036 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB1B57ADBB38482DF69C1BAFBD005B5FBBA58F35D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F, ___entries_1)); }
	inline EntryU5BU5D_t62369860DF1B93A5FA7F954F65C1E5DF6A101D3D* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t62369860DF1B93A5FA7F954F65C1E5DF6A101D3D** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t62369860DF1B93A5FA7F954F65C1E5DF6A101D3D* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F, ___keys_7)); }
	inline KeyCollection_t8781CBDEEAE9F4610606E221E42A30D7FED21036 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8781CBDEEAE9F4610606E221E42A30D7FED21036 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8781CBDEEAE9F4610606E221E42A30D7FED21036 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F, ___values_8)); }
	inline ValueCollection_tB1B57ADBB38482DF69C1BAFBD005B5FBBA58F35D * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB1B57ADBB38482DF69C1BAFBD005B5FBBA58F35D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB1B57ADBB38482DF69C1BAFBD005B5FBBA58F35D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T6058911EEE43591076AB7625C4B87296D2B2E94F_H
#ifndef DICTIONARY_2_TDBB540258E01DD19F5B248555ADFB91E451BADF0_H
#define DICTIONARY_2_TDBB540258E01DD19F5B248555ADFB91E451BADF0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate>
struct  Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tF31D738E3FA4E8D20FF52C41823DB62C5F7BF5E8* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t225708DAE30EFC8FD402BA591CE46185AE052303 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t70211AF2B99F2C200028CE3638A6441966BCB7E4 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0, ___entries_1)); }
	inline EntryU5BU5D_tF31D738E3FA4E8D20FF52C41823DB62C5F7BF5E8* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tF31D738E3FA4E8D20FF52C41823DB62C5F7BF5E8** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tF31D738E3FA4E8D20FF52C41823DB62C5F7BF5E8* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0, ___keys_7)); }
	inline KeyCollection_t225708DAE30EFC8FD402BA591CE46185AE052303 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t225708DAE30EFC8FD402BA591CE46185AE052303 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t225708DAE30EFC8FD402BA591CE46185AE052303 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0, ___values_8)); }
	inline ValueCollection_t70211AF2B99F2C200028CE3638A6441966BCB7E4 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t70211AF2B99F2C200028CE3638A6441966BCB7E4 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t70211AF2B99F2C200028CE3638A6441966BCB7E4 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TDBB540258E01DD19F5B248555ADFB91E451BADF0_H
#ifndef DICTIONARY_2_T82DF621BE8A4AF1698D938F3A777446F51CC9E41_H
#define DICTIONARY_2_T82DF621BE8A4AF1698D938F3A777446F51CC9E41_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetIntrinsicsDelegate>
struct  Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tCB2581883FB0BEF77BA787520C9156E1D16B7EB3* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t33797ADCFA6F1D28CF8C5F0B806B7E40E01DC232 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tFB4AF408718AD5283C15F421797EE3B07A4BF49C * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41, ___entries_1)); }
	inline EntryU5BU5D_tCB2581883FB0BEF77BA787520C9156E1D16B7EB3* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tCB2581883FB0BEF77BA787520C9156E1D16B7EB3** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tCB2581883FB0BEF77BA787520C9156E1D16B7EB3* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41, ___keys_7)); }
	inline KeyCollection_t33797ADCFA6F1D28CF8C5F0B806B7E40E01DC232 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t33797ADCFA6F1D28CF8C5F0B806B7E40E01DC232 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t33797ADCFA6F1D28CF8C5F0B806B7E40E01DC232 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41, ___values_8)); }
	inline ValueCollection_tFB4AF408718AD5283C15F421797EE3B07A4BF49C * get_values_8() const { return ___values_8; }
	inline ValueCollection_tFB4AF408718AD5283C15F421797EE3B07A4BF49C ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tFB4AF408718AD5283C15F421797EE3B07A4BF49C * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T82DF621BE8A4AF1698D938F3A777446F51CC9E41_H
#ifndef DICTIONARY_2_TF65291F5C17BE4538B0A42E1C7369F27621D2554_H
#define DICTIONARY_2_TF65291F5C17BE4538B0A42E1C7369F27621D2554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions_AttachReferencePointDelegate>
struct  Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t01E6C0CA927D7204D56376E25D93AABB080FC3CB* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0363A12B44AC4DCAFA1193ADA5A7236ADC6F41DF * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t66DB416B596CAC89A398125291433074EE2AD61D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554, ___entries_1)); }
	inline EntryU5BU5D_t01E6C0CA927D7204D56376E25D93AABB080FC3CB* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t01E6C0CA927D7204D56376E25D93AABB080FC3CB** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t01E6C0CA927D7204D56376E25D93AABB080FC3CB* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554, ___keys_7)); }
	inline KeyCollection_t0363A12B44AC4DCAFA1193ADA5A7236ADC6F41DF * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0363A12B44AC4DCAFA1193ADA5A7236ADC6F41DF ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0363A12B44AC4DCAFA1193ADA5A7236ADC6F41DF * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554, ___values_8)); }
	inline ValueCollection_t66DB416B596CAC89A398125291433074EE2AD61D * get_values_8() const { return ___values_8; }
	inline ValueCollection_t66DB416B596CAC89A398125291433074EE2AD61D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t66DB416B596CAC89A398125291433074EE2AD61D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TF65291F5C17BE4538B0A42E1C7369F27621D2554_H
#ifndef DICTIONARY_2_TCA4D6C75E791133AABE5613D1D1A6A554382A344_H
#define DICTIONARY_2_TCA4D6C75E791133AABE5613D1D1A6A554382A344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions_AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>
struct  Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t309D90841BD80E263010FCD019FC865989B3A657* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1D3E062C8FB4A9814D7EBB086549D65502E18576 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB6105FA62648906715C21A02B239F29DA2520B90 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344, ___entries_1)); }
	inline EntryU5BU5D_t309D90841BD80E263010FCD019FC865989B3A657* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t309D90841BD80E263010FCD019FC865989B3A657** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t309D90841BD80E263010FCD019FC865989B3A657* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344, ___keys_7)); }
	inline KeyCollection_t1D3E062C8FB4A9814D7EBB086549D65502E18576 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1D3E062C8FB4A9814D7EBB086549D65502E18576 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1D3E062C8FB4A9814D7EBB086549D65502E18576 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344, ___values_8)); }
	inline ValueCollection_tB6105FA62648906715C21A02B239F29DA2520B90 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB6105FA62648906715C21A02B239F29DA2520B90 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB6105FA62648906715C21A02B239F29DA2520B90 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TCA4D6C75E791133AABE5613D1D1A6A554382A344_H
#ifndef DICTIONARY_2_T5440C9C92669AAC2A8D32C4BC41523E53DE6A49F_H
#define DICTIONARY_2_T5440C9C92669AAC2A8D32C4BC41523E53DE6A49F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions_AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>>
struct  Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1C0DEC519B1B94568369C66E78736FF9C7FA698C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC80EC1474EA8EA0BEAC40E1825F2E5C26217A599 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t69F1735ECC809B962971F054A65AC7602CBFD87B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F, ___entries_1)); }
	inline EntryU5BU5D_t1C0DEC519B1B94568369C66E78736FF9C7FA698C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1C0DEC519B1B94568369C66E78736FF9C7FA698C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1C0DEC519B1B94568369C66E78736FF9C7FA698C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F, ___keys_7)); }
	inline KeyCollection_tC80EC1474EA8EA0BEAC40E1825F2E5C26217A599 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC80EC1474EA8EA0BEAC40E1825F2E5C26217A599 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC80EC1474EA8EA0BEAC40E1825F2E5C26217A599 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F, ___values_8)); }
	inline ValueCollection_t69F1735ECC809B962971F054A65AC7602CBFD87B * get_values_8() const { return ___values_8; }
	inline ValueCollection_t69F1735ECC809B962971F054A65AC7602CBFD87B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t69F1735ECC809B962971F054A65AC7602CBFD87B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T5440C9C92669AAC2A8D32C4BC41523E53DE6A49F_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#define CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#ifndef DEFAULTCAMERACONFIGAPI_T125599F6D1891BEF834E1B20C71C503AB27F4091_H
#define DEFAULTCAMERACONFIGAPI_T125599F6D1891BEF834E1B20C71C503AB27F4091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.DefaultCameraConfigApi
struct  DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTCAMERACONFIGAPI_T125599F6D1891BEF834E1B20C71C503AB27F4091_H
#ifndef DEFAULTCAMERAIMAGEAPI_T32807EEA82DF3B067158E1DCEA117A577B5E3BCB_H
#define DEFAULTCAMERAIMAGEAPI_T32807EEA82DF3B067158E1DCEA117A577B5E3BCB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.DefaultCameraImageApi
struct  DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTCAMERAIMAGEAPI_T32807EEA82DF3B067158E1DCEA117A577B5E3BCB_H
#ifndef REGISTRATIONHELPER_T0925D2AC89FBDCEB2FA94AEDADCBA81670F5B531_H
#define REGISTRATIONHELPER_T0925D2AC89FBDCEB2FA94AEDADCBA81670F5B531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.RegistrationHelper
struct  RegistrationHelper_t0925D2AC89FBDCEB2FA94AEDADCBA81670F5B531  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRATIONHELPER_T0925D2AC89FBDCEB2FA94AEDADCBA81670F5B531_H
#ifndef SESSIONAVAILABILITYEXTENSIONS_TE9EC580D14C93F2A5732599A5A7F0435EC737929_H
#define SESSIONAVAILABILITYEXTENSIONS_TE9EC580D14C93F2A5732599A5A7F0435EC737929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.SessionAvailabilityExtensions
struct  SessionAvailabilityExtensions_tE9EC580D14C93F2A5732599A5A7F0435EC737929  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONAVAILABILITYEXTENSIONS_TE9EC580D14C93F2A5732599A5A7F0435EC737929_H
#ifndef XRCAMERAEXTENSIONS_T9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_H
#define XRCAMERAEXTENSIONS_T9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRCameraExtensions
struct  XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D  : public RuntimeObject
{
public:

public:
};

struct XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields
{
public:
	// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_IsPermissionGrantedDelegate
	Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 * ___s_IsPermissionGrantedDelegate_0;
	// UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate UnityEngine.XR.ARExtensions.XRCameraExtensions::s_TryGetColorCorrectionDelegate
	TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * ___s_TryGetColorCorrectionDelegate_1;
	// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_GetNativePtrDelegate
	Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD * ___s_GetNativePtrDelegate_2;
	// UnityEngine.XR.ARExtensions.ICameraImageApi UnityEngine.XR.ARExtensions.XRCameraExtensions::s_CameraImageApi
	RuntimeObject* ___s_CameraImageApi_3;
	// UnityEngine.XR.ARExtensions.DefaultCameraImageApi UnityEngine.XR.ARExtensions.XRCameraExtensions::s_DefaultCameraImageApi
	DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * ___s_DefaultCameraImageApi_4;
	// UnityEngine.XR.ARExtensions.ICameraConfigApi UnityEngine.XR.ARExtensions.XRCameraExtensions::s_CameraConfigApi
	RuntimeObject* ___s_CameraConfigApi_5;
	// UnityEngine.XR.ARExtensions.DefaultCameraConfigApi UnityEngine.XR.ARExtensions.XRCameraExtensions::s_DefaultCameraConfigApi
	DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * ___s_DefaultCameraConfigApi_6;
	// System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_TrySetFocusModeDelegate
	Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 * ___s_TrySetFocusModeDelegate_7;
	// UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetIntrinsicsDelegate UnityEngine.XR.ARExtensions.XRCameraExtensions::s_TryGetIntrinsicsDelegate
	TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * ___s_TryGetIntrinsicsDelegate_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_IsPermissionGrantedDelegates
	Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B * ___s_IsPermissionGrantedDelegates_9;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_TryGetColorCorrectionDelegates
	Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0 * ___s_TryGetColorCorrectionDelegates_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_GetNativePtrDelegates
	Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730 * ___s_GetNativePtrDelegates_11;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_CameraImageApis
	Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F * ___s_CameraImageApis_12;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_CameraConfigApis
	Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF * ___s_CameraConfigApis_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_TrySetFocusModeDelegates
	Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF * ___s_TrySetFocusModeDelegates_14;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetIntrinsicsDelegate> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_TryGetIntrinsicsDelegates
	Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41 * ___s_TryGetIntrinsicsDelegates_15;

public:
	inline static int32_t get_offset_of_s_IsPermissionGrantedDelegate_0() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_IsPermissionGrantedDelegate_0)); }
	inline Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 * get_s_IsPermissionGrantedDelegate_0() const { return ___s_IsPermissionGrantedDelegate_0; }
	inline Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 ** get_address_of_s_IsPermissionGrantedDelegate_0() { return &___s_IsPermissionGrantedDelegate_0; }
	inline void set_s_IsPermissionGrantedDelegate_0(Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 * value)
	{
		___s_IsPermissionGrantedDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsPermissionGrantedDelegate_0), value);
	}

	inline static int32_t get_offset_of_s_TryGetColorCorrectionDelegate_1() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_TryGetColorCorrectionDelegate_1)); }
	inline TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * get_s_TryGetColorCorrectionDelegate_1() const { return ___s_TryGetColorCorrectionDelegate_1; }
	inline TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 ** get_address_of_s_TryGetColorCorrectionDelegate_1() { return &___s_TryGetColorCorrectionDelegate_1; }
	inline void set_s_TryGetColorCorrectionDelegate_1(TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * value)
	{
		___s_TryGetColorCorrectionDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_TryGetColorCorrectionDelegate_1), value);
	}

	inline static int32_t get_offset_of_s_GetNativePtrDelegate_2() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_GetNativePtrDelegate_2)); }
	inline Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD * get_s_GetNativePtrDelegate_2() const { return ___s_GetNativePtrDelegate_2; }
	inline Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD ** get_address_of_s_GetNativePtrDelegate_2() { return &___s_GetNativePtrDelegate_2; }
	inline void set_s_GetNativePtrDelegate_2(Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD * value)
	{
		___s_GetNativePtrDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_GetNativePtrDelegate_2), value);
	}

	inline static int32_t get_offset_of_s_CameraImageApi_3() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_CameraImageApi_3)); }
	inline RuntimeObject* get_s_CameraImageApi_3() const { return ___s_CameraImageApi_3; }
	inline RuntimeObject** get_address_of_s_CameraImageApi_3() { return &___s_CameraImageApi_3; }
	inline void set_s_CameraImageApi_3(RuntimeObject* value)
	{
		___s_CameraImageApi_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_CameraImageApi_3), value);
	}

	inline static int32_t get_offset_of_s_DefaultCameraImageApi_4() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_DefaultCameraImageApi_4)); }
	inline DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * get_s_DefaultCameraImageApi_4() const { return ___s_DefaultCameraImageApi_4; }
	inline DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB ** get_address_of_s_DefaultCameraImageApi_4() { return &___s_DefaultCameraImageApi_4; }
	inline void set_s_DefaultCameraImageApi_4(DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * value)
	{
		___s_DefaultCameraImageApi_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultCameraImageApi_4), value);
	}

	inline static int32_t get_offset_of_s_CameraConfigApi_5() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_CameraConfigApi_5)); }
	inline RuntimeObject* get_s_CameraConfigApi_5() const { return ___s_CameraConfigApi_5; }
	inline RuntimeObject** get_address_of_s_CameraConfigApi_5() { return &___s_CameraConfigApi_5; }
	inline void set_s_CameraConfigApi_5(RuntimeObject* value)
	{
		___s_CameraConfigApi_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_CameraConfigApi_5), value);
	}

	inline static int32_t get_offset_of_s_DefaultCameraConfigApi_6() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_DefaultCameraConfigApi_6)); }
	inline DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * get_s_DefaultCameraConfigApi_6() const { return ___s_DefaultCameraConfigApi_6; }
	inline DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 ** get_address_of_s_DefaultCameraConfigApi_6() { return &___s_DefaultCameraConfigApi_6; }
	inline void set_s_DefaultCameraConfigApi_6(DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * value)
	{
		___s_DefaultCameraConfigApi_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultCameraConfigApi_6), value);
	}

	inline static int32_t get_offset_of_s_TrySetFocusModeDelegate_7() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_TrySetFocusModeDelegate_7)); }
	inline Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 * get_s_TrySetFocusModeDelegate_7() const { return ___s_TrySetFocusModeDelegate_7; }
	inline Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 ** get_address_of_s_TrySetFocusModeDelegate_7() { return &___s_TrySetFocusModeDelegate_7; }
	inline void set_s_TrySetFocusModeDelegate_7(Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 * value)
	{
		___s_TrySetFocusModeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((&___s_TrySetFocusModeDelegate_7), value);
	}

	inline static int32_t get_offset_of_s_TryGetIntrinsicsDelegate_8() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_TryGetIntrinsicsDelegate_8)); }
	inline TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * get_s_TryGetIntrinsicsDelegate_8() const { return ___s_TryGetIntrinsicsDelegate_8; }
	inline TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 ** get_address_of_s_TryGetIntrinsicsDelegate_8() { return &___s_TryGetIntrinsicsDelegate_8; }
	inline void set_s_TryGetIntrinsicsDelegate_8(TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * value)
	{
		___s_TryGetIntrinsicsDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&___s_TryGetIntrinsicsDelegate_8), value);
	}

	inline static int32_t get_offset_of_s_IsPermissionGrantedDelegates_9() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_IsPermissionGrantedDelegates_9)); }
	inline Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B * get_s_IsPermissionGrantedDelegates_9() const { return ___s_IsPermissionGrantedDelegates_9; }
	inline Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B ** get_address_of_s_IsPermissionGrantedDelegates_9() { return &___s_IsPermissionGrantedDelegates_9; }
	inline void set_s_IsPermissionGrantedDelegates_9(Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B * value)
	{
		___s_IsPermissionGrantedDelegates_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsPermissionGrantedDelegates_9), value);
	}

	inline static int32_t get_offset_of_s_TryGetColorCorrectionDelegates_10() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_TryGetColorCorrectionDelegates_10)); }
	inline Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0 * get_s_TryGetColorCorrectionDelegates_10() const { return ___s_TryGetColorCorrectionDelegates_10; }
	inline Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0 ** get_address_of_s_TryGetColorCorrectionDelegates_10() { return &___s_TryGetColorCorrectionDelegates_10; }
	inline void set_s_TryGetColorCorrectionDelegates_10(Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0 * value)
	{
		___s_TryGetColorCorrectionDelegates_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_TryGetColorCorrectionDelegates_10), value);
	}

	inline static int32_t get_offset_of_s_GetNativePtrDelegates_11() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_GetNativePtrDelegates_11)); }
	inline Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730 * get_s_GetNativePtrDelegates_11() const { return ___s_GetNativePtrDelegates_11; }
	inline Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730 ** get_address_of_s_GetNativePtrDelegates_11() { return &___s_GetNativePtrDelegates_11; }
	inline void set_s_GetNativePtrDelegates_11(Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730 * value)
	{
		___s_GetNativePtrDelegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_GetNativePtrDelegates_11), value);
	}

	inline static int32_t get_offset_of_s_CameraImageApis_12() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_CameraImageApis_12)); }
	inline Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F * get_s_CameraImageApis_12() const { return ___s_CameraImageApis_12; }
	inline Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F ** get_address_of_s_CameraImageApis_12() { return &___s_CameraImageApis_12; }
	inline void set_s_CameraImageApis_12(Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F * value)
	{
		___s_CameraImageApis_12 = value;
		Il2CppCodeGenWriteBarrier((&___s_CameraImageApis_12), value);
	}

	inline static int32_t get_offset_of_s_CameraConfigApis_13() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_CameraConfigApis_13)); }
	inline Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF * get_s_CameraConfigApis_13() const { return ___s_CameraConfigApis_13; }
	inline Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF ** get_address_of_s_CameraConfigApis_13() { return &___s_CameraConfigApis_13; }
	inline void set_s_CameraConfigApis_13(Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF * value)
	{
		___s_CameraConfigApis_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_CameraConfigApis_13), value);
	}

	inline static int32_t get_offset_of_s_TrySetFocusModeDelegates_14() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_TrySetFocusModeDelegates_14)); }
	inline Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF * get_s_TrySetFocusModeDelegates_14() const { return ___s_TrySetFocusModeDelegates_14; }
	inline Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF ** get_address_of_s_TrySetFocusModeDelegates_14() { return &___s_TrySetFocusModeDelegates_14; }
	inline void set_s_TrySetFocusModeDelegates_14(Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF * value)
	{
		___s_TrySetFocusModeDelegates_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_TrySetFocusModeDelegates_14), value);
	}

	inline static int32_t get_offset_of_s_TryGetIntrinsicsDelegates_15() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_TryGetIntrinsicsDelegates_15)); }
	inline Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41 * get_s_TryGetIntrinsicsDelegates_15() const { return ___s_TryGetIntrinsicsDelegates_15; }
	inline Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41 ** get_address_of_s_TryGetIntrinsicsDelegates_15() { return &___s_TryGetIntrinsicsDelegates_15; }
	inline void set_s_TryGetIntrinsicsDelegates_15(Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41 * value)
	{
		___s_TryGetIntrinsicsDelegates_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_TryGetIntrinsicsDelegates_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRCAMERAEXTENSIONS_T9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_H
#ifndef XRPLANEEXTENSIONS_TE5907A4D3FC04AB6A65D1F86404095C31362D4BE_H
#define XRPLANEEXTENSIONS_TE5907A4D3FC04AB6A65D1F86404095C31362D4BE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRPlaneExtensions
struct  XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE  : public RuntimeObject
{
public:

public:
};

struct XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields
{
public:
	// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_GetNativePtrDelegate
	Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 * ___s_GetNativePtrDelegate_0;
	// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_GetTrackingStateDelegate
	Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 * ___s_GetTrackingStateDelegate_1;
	// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_TrySetPlaneDetectionFlagsDelegate
	Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 * ___s_TrySetPlaneDetectionFlagsDelegate_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_GetNativePtrDelegates
	Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409 * ___s_GetNativePtrDelegates_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_GetTrackingStateDelegates
	Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467 * ___s_GetTrackingStateDelegates_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_TrySetPlaneDetectionFlagsDelegates
	Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6 * ___s_TrySetPlaneDetectionFlagsDelegates_5;

public:
	inline static int32_t get_offset_of_s_GetNativePtrDelegate_0() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields, ___s_GetNativePtrDelegate_0)); }
	inline Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 * get_s_GetNativePtrDelegate_0() const { return ___s_GetNativePtrDelegate_0; }
	inline Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 ** get_address_of_s_GetNativePtrDelegate_0() { return &___s_GetNativePtrDelegate_0; }
	inline void set_s_GetNativePtrDelegate_0(Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 * value)
	{
		___s_GetNativePtrDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_GetNativePtrDelegate_0), value);
	}

	inline static int32_t get_offset_of_s_GetTrackingStateDelegate_1() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields, ___s_GetTrackingStateDelegate_1)); }
	inline Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 * get_s_GetTrackingStateDelegate_1() const { return ___s_GetTrackingStateDelegate_1; }
	inline Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 ** get_address_of_s_GetTrackingStateDelegate_1() { return &___s_GetTrackingStateDelegate_1; }
	inline void set_s_GetTrackingStateDelegate_1(Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 * value)
	{
		___s_GetTrackingStateDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_GetTrackingStateDelegate_1), value);
	}

	inline static int32_t get_offset_of_s_TrySetPlaneDetectionFlagsDelegate_2() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields, ___s_TrySetPlaneDetectionFlagsDelegate_2)); }
	inline Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 * get_s_TrySetPlaneDetectionFlagsDelegate_2() const { return ___s_TrySetPlaneDetectionFlagsDelegate_2; }
	inline Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 ** get_address_of_s_TrySetPlaneDetectionFlagsDelegate_2() { return &___s_TrySetPlaneDetectionFlagsDelegate_2; }
	inline void set_s_TrySetPlaneDetectionFlagsDelegate_2(Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 * value)
	{
		___s_TrySetPlaneDetectionFlagsDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_TrySetPlaneDetectionFlagsDelegate_2), value);
	}

	inline static int32_t get_offset_of_s_GetNativePtrDelegates_3() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields, ___s_GetNativePtrDelegates_3)); }
	inline Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409 * get_s_GetNativePtrDelegates_3() const { return ___s_GetNativePtrDelegates_3; }
	inline Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409 ** get_address_of_s_GetNativePtrDelegates_3() { return &___s_GetNativePtrDelegates_3; }
	inline void set_s_GetNativePtrDelegates_3(Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409 * value)
	{
		___s_GetNativePtrDelegates_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_GetNativePtrDelegates_3), value);
	}

	inline static int32_t get_offset_of_s_GetTrackingStateDelegates_4() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields, ___s_GetTrackingStateDelegates_4)); }
	inline Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467 * get_s_GetTrackingStateDelegates_4() const { return ___s_GetTrackingStateDelegates_4; }
	inline Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467 ** get_address_of_s_GetTrackingStateDelegates_4() { return &___s_GetTrackingStateDelegates_4; }
	inline void set_s_GetTrackingStateDelegates_4(Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467 * value)
	{
		___s_GetTrackingStateDelegates_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_GetTrackingStateDelegates_4), value);
	}

	inline static int32_t get_offset_of_s_TrySetPlaneDetectionFlagsDelegates_5() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields, ___s_TrySetPlaneDetectionFlagsDelegates_5)); }
	inline Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6 * get_s_TrySetPlaneDetectionFlagsDelegates_5() const { return ___s_TrySetPlaneDetectionFlagsDelegates_5; }
	inline Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6 ** get_address_of_s_TrySetPlaneDetectionFlagsDelegates_5() { return &___s_TrySetPlaneDetectionFlagsDelegates_5; }
	inline void set_s_TrySetPlaneDetectionFlagsDelegates_5(Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6 * value)
	{
		___s_TrySetPlaneDetectionFlagsDelegates_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_TrySetPlaneDetectionFlagsDelegates_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRPLANEEXTENSIONS_TE5907A4D3FC04AB6A65D1F86404095C31362D4BE_H
#ifndef XRREFERENCEPOINTEXTENSIONS_TDB4598C0A44D28208D387FF166DD81A02D92D74D_H
#define XRREFERENCEPOINTEXTENSIONS_TDB4598C0A44D28208D387FF166DD81A02D92D74D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRReferencePointExtensions
struct  XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D  : public RuntimeObject
{
public:

public:
};

struct XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields
{
public:
	// UnityEngine.XR.ARExtensions.XRReferencePointExtensions_AttachReferencePointDelegate UnityEngine.XR.ARExtensions.XRReferencePointExtensions::s_AttachReferencePointDelegate
	AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * ___s_AttachReferencePointDelegate_0;
	// System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr> UnityEngine.XR.ARExtensions.XRReferencePointExtensions::s_GetNativePtrDelegate
	Func_3_tE51207E7A242422D97436D398CA19D150FF94581 * ___s_GetNativePtrDelegate_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions_AttachReferencePointDelegate> UnityEngine.XR.ARExtensions.XRReferencePointExtensions::s_AttachReferencePointDelegates
	Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554 * ___s_AttachReferencePointDelegates_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>> UnityEngine.XR.ARExtensions.XRReferencePointExtensions::s_GetNativePtrDelegates
	Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D * ___s_GetNativePtrDelegates_3;

public:
	inline static int32_t get_offset_of_s_AttachReferencePointDelegate_0() { return static_cast<int32_t>(offsetof(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields, ___s_AttachReferencePointDelegate_0)); }
	inline AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * get_s_AttachReferencePointDelegate_0() const { return ___s_AttachReferencePointDelegate_0; }
	inline AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF ** get_address_of_s_AttachReferencePointDelegate_0() { return &___s_AttachReferencePointDelegate_0; }
	inline void set_s_AttachReferencePointDelegate_0(AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * value)
	{
		___s_AttachReferencePointDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_AttachReferencePointDelegate_0), value);
	}

	inline static int32_t get_offset_of_s_GetNativePtrDelegate_1() { return static_cast<int32_t>(offsetof(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields, ___s_GetNativePtrDelegate_1)); }
	inline Func_3_tE51207E7A242422D97436D398CA19D150FF94581 * get_s_GetNativePtrDelegate_1() const { return ___s_GetNativePtrDelegate_1; }
	inline Func_3_tE51207E7A242422D97436D398CA19D150FF94581 ** get_address_of_s_GetNativePtrDelegate_1() { return &___s_GetNativePtrDelegate_1; }
	inline void set_s_GetNativePtrDelegate_1(Func_3_tE51207E7A242422D97436D398CA19D150FF94581 * value)
	{
		___s_GetNativePtrDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_GetNativePtrDelegate_1), value);
	}

	inline static int32_t get_offset_of_s_AttachReferencePointDelegates_2() { return static_cast<int32_t>(offsetof(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields, ___s_AttachReferencePointDelegates_2)); }
	inline Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554 * get_s_AttachReferencePointDelegates_2() const { return ___s_AttachReferencePointDelegates_2; }
	inline Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554 ** get_address_of_s_AttachReferencePointDelegates_2() { return &___s_AttachReferencePointDelegates_2; }
	inline void set_s_AttachReferencePointDelegates_2(Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554 * value)
	{
		___s_AttachReferencePointDelegates_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_AttachReferencePointDelegates_2), value);
	}

	inline static int32_t get_offset_of_s_GetNativePtrDelegates_3() { return static_cast<int32_t>(offsetof(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields, ___s_GetNativePtrDelegates_3)); }
	inline Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D * get_s_GetNativePtrDelegates_3() const { return ___s_GetNativePtrDelegates_3; }
	inline Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D ** get_address_of_s_GetNativePtrDelegates_3() { return &___s_GetNativePtrDelegates_3; }
	inline void set_s_GetNativePtrDelegates_3(Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D * value)
	{
		___s_GetNativePtrDelegates_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_GetNativePtrDelegates_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRREFERENCEPOINTEXTENSIONS_TDB4598C0A44D28208D387FF166DD81A02D92D74D_H
#ifndef XRSESSIONEXTENSIONS_T90CFFFAE273DEBF123D02B08B529F491CFA1DF49_H
#define XRSESSIONEXTENSIONS_T90CFFFAE273DEBF123D02B08B529F491CFA1DF49_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRSessionExtensions
struct  XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49  : public RuntimeObject
{
public:

public:
};

struct XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields
{
public:
	// UnityEngine.XR.ARExtensions.XRSessionExtensions_AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus> UnityEngine.XR.ARExtensions.XRSessionExtensions::s_InstallAsyncDelegate
	AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * ___s_InstallAsyncDelegate_0;
	// UnityEngine.XR.ARExtensions.XRSessionExtensions_AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability> UnityEngine.XR.ARExtensions.XRSessionExtensions::s_GetAvailabilityAsyncDelegate
	AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * ___s_GetAvailabilityAsyncDelegate_1;
	// System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr> UnityEngine.XR.ARExtensions.XRSessionExtensions::s_GetNativePtrDelegate
	Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 * ___s_GetNativePtrDelegate_2;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions_AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>> UnityEngine.XR.ARExtensions.XRSessionExtensions::s_InstallAsyncDelegates
	Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F * ___s_InstallAsyncDelegates_3;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions_AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>> UnityEngine.XR.ARExtensions.XRSessionExtensions::s_GetAvailabilityAsyncDelegates
	Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344 * ___s_GetAvailabilityAsyncDelegates_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>> UnityEngine.XR.ARExtensions.XRSessionExtensions::s_GetNativePtrDelegates
	Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7 * ___s_GetNativePtrDelegates_5;

public:
	inline static int32_t get_offset_of_s_InstallAsyncDelegate_0() { return static_cast<int32_t>(offsetof(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields, ___s_InstallAsyncDelegate_0)); }
	inline AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * get_s_InstallAsyncDelegate_0() const { return ___s_InstallAsyncDelegate_0; }
	inline AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 ** get_address_of_s_InstallAsyncDelegate_0() { return &___s_InstallAsyncDelegate_0; }
	inline void set_s_InstallAsyncDelegate_0(AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * value)
	{
		___s_InstallAsyncDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_InstallAsyncDelegate_0), value);
	}

	inline static int32_t get_offset_of_s_GetAvailabilityAsyncDelegate_1() { return static_cast<int32_t>(offsetof(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields, ___s_GetAvailabilityAsyncDelegate_1)); }
	inline AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * get_s_GetAvailabilityAsyncDelegate_1() const { return ___s_GetAvailabilityAsyncDelegate_1; }
	inline AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 ** get_address_of_s_GetAvailabilityAsyncDelegate_1() { return &___s_GetAvailabilityAsyncDelegate_1; }
	inline void set_s_GetAvailabilityAsyncDelegate_1(AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * value)
	{
		___s_GetAvailabilityAsyncDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_GetAvailabilityAsyncDelegate_1), value);
	}

	inline static int32_t get_offset_of_s_GetNativePtrDelegate_2() { return static_cast<int32_t>(offsetof(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields, ___s_GetNativePtrDelegate_2)); }
	inline Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 * get_s_GetNativePtrDelegate_2() const { return ___s_GetNativePtrDelegate_2; }
	inline Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 ** get_address_of_s_GetNativePtrDelegate_2() { return &___s_GetNativePtrDelegate_2; }
	inline void set_s_GetNativePtrDelegate_2(Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 * value)
	{
		___s_GetNativePtrDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_GetNativePtrDelegate_2), value);
	}

	inline static int32_t get_offset_of_s_InstallAsyncDelegates_3() { return static_cast<int32_t>(offsetof(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields, ___s_InstallAsyncDelegates_3)); }
	inline Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F * get_s_InstallAsyncDelegates_3() const { return ___s_InstallAsyncDelegates_3; }
	inline Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F ** get_address_of_s_InstallAsyncDelegates_3() { return &___s_InstallAsyncDelegates_3; }
	inline void set_s_InstallAsyncDelegates_3(Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F * value)
	{
		___s_InstallAsyncDelegates_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_InstallAsyncDelegates_3), value);
	}

	inline static int32_t get_offset_of_s_GetAvailabilityAsyncDelegates_4() { return static_cast<int32_t>(offsetof(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields, ___s_GetAvailabilityAsyncDelegates_4)); }
	inline Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344 * get_s_GetAvailabilityAsyncDelegates_4() const { return ___s_GetAvailabilityAsyncDelegates_4; }
	inline Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344 ** get_address_of_s_GetAvailabilityAsyncDelegates_4() { return &___s_GetAvailabilityAsyncDelegates_4; }
	inline void set_s_GetAvailabilityAsyncDelegates_4(Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344 * value)
	{
		___s_GetAvailabilityAsyncDelegates_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_GetAvailabilityAsyncDelegates_4), value);
	}

	inline static int32_t get_offset_of_s_GetNativePtrDelegates_5() { return static_cast<int32_t>(offsetof(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields, ___s_GetNativePtrDelegates_5)); }
	inline Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7 * get_s_GetNativePtrDelegates_5() const { return ___s_GetNativePtrDelegates_5; }
	inline Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7 ** get_address_of_s_GetNativePtrDelegates_5() { return &___s_GetNativePtrDelegates_5; }
	inline void set_s_GetNativePtrDelegates_5(Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7 * value)
	{
		___s_GetNativePtrDelegates_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_GetNativePtrDelegates_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRSESSIONEXTENSIONS_T90CFFFAE273DEBF123D02B08B529F491CFA1DF49_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef TRACKABLEID_TA539F57E82A04D410FE11E10ACC830CF7CD71F7B_H
#define TRACKABLEID_TA539F57E82A04D410FE11E10ACC830CF7CD71F7B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.TrackableId
struct  TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B 
{
public:
	// System.UInt64 UnityEngine.Experimental.XR.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.Experimental.XR.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B_StaticFields
{
public:
	// UnityEngine.Experimental.XR.TrackableId UnityEngine.Experimental.XR.TrackableId::s_InvalidId
	TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  value)
	{
		___s_InvalidId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEID_TA539F57E82A04D410FE11E10ACC830CF7CD71F7B_H
#ifndef PROPERTYATTRIBUTE_T25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54_H
#define PROPERTYATTRIBUTE_T25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR2INT_T339DA203C037FA6BCFC926C36DC2194D52D5F905_H
#define VECTOR2INT_T339DA203C037FA6BCFC926C36DC2194D52D5F905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2Int
struct  Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_One_3)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Up_4)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Down_5)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Left_6)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Right_7)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Right_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2INT_T339DA203C037FA6BCFC926C36DC2194D52D5F905_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#define INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifndef INTEGRATEDSUBSYSTEM_TF67A736CD38F3A64A40687C90024FA7326AF7D86_H
#define INTEGRATEDSUBSYSTEM_TF67A736CD38F3A64A40687C90024FA7326AF7D86_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystem
struct  IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Experimental.ISubsystemDescriptor UnityEngine.Experimental.IntegratedSubsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_subsystemDescriptor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.IntegratedSubsystem
struct IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.IntegratedSubsystem
struct IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
#endif // INTEGRATEDSUBSYSTEM_TF67A736CD38F3A64A40687C90024FA7326AF7D86_H
#ifndef INTEGRATEDSUBSYSTEMDESCRIPTOR_TD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_H
#define INTEGRATEDSUBSYSTEMDESCRIPTOR_TD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystemDescriptor
struct  IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.IntegratedSubsystemDescriptor::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Experimental.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // INTEGRATEDSUBSYSTEMDESCRIPTOR_TD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_H
#ifndef TRACKINGSTATE_TC867717ED982A6E61C703B6A0CCF908E9642C854_H
#define TRACKINGSTATE_TC867717ED982A6E61C703B6A0CCF908E9642C854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.TrackingState
struct  TrackingState_tC867717ED982A6E61C703B6A0CCF908E9642C854 
{
public:
	// System.Int32 UnityEngine.Experimental.XR.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tC867717ED982A6E61C703B6A0CCF908E9642C854, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKINGSTATE_TC867717ED982A6E61C703B6A0CCF908E9642C854_H
#ifndef POSE_T2997DE3CB3863E4D78FCF42B46FC481818823F29_H
#define POSE_T2997DE3CB3863E4D78FCF42B46FC481818823F29_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSE_T2997DE3CB3863E4D78FCF42B46FC481818823F29_H
#ifndef CAMERAFOCUSMODE_T198966DE20F938A7890CE5EBFB00CCA53EAF4ED4_H
#define CAMERAFOCUSMODE_T198966DE20F938A7890CE5EBFB00CCA53EAF4ED4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.CameraFocusMode
struct  CameraFocusMode_t198966DE20F938A7890CE5EBFB00CCA53EAF4ED4 
{
public:
	// System.Int32 UnityEngine.XR.ARExtensions.CameraFocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFocusMode_t198966DE20F938A7890CE5EBFB00CCA53EAF4ED4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAFOCUSMODE_T198966DE20F938A7890CE5EBFB00CCA53EAF4ED4_H
#ifndef CAMERAINTRINSICS_TF5C8338837CCA8C112418715D15B806AD05B8447_H
#define CAMERAINTRINSICS_TF5C8338837CCA8C112418715D15B806AD05B8447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.CameraIntrinsics
struct  CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 
{
public:
	// UnityEngine.Vector2 UnityEngine.XR.ARExtensions.CameraIntrinsics::m_FocalLength
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_FocalLength_0;
	// UnityEngine.Vector2 UnityEngine.XR.ARExtensions.CameraIntrinsics::m_PrincipalPoint
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PrincipalPoint_1;
	// UnityEngine.Vector2Int UnityEngine.XR.ARExtensions.CameraIntrinsics::m_Resolution
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___m_Resolution_2;

public:
	inline static int32_t get_offset_of_m_FocalLength_0() { return static_cast<int32_t>(offsetof(CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447, ___m_FocalLength_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_FocalLength_0() const { return ___m_FocalLength_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_FocalLength_0() { return &___m_FocalLength_0; }
	inline void set_m_FocalLength_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_FocalLength_0 = value;
	}

	inline static int32_t get_offset_of_m_PrincipalPoint_1() { return static_cast<int32_t>(offsetof(CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447, ___m_PrincipalPoint_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PrincipalPoint_1() const { return ___m_PrincipalPoint_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PrincipalPoint_1() { return &___m_PrincipalPoint_1; }
	inline void set_m_PrincipalPoint_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PrincipalPoint_1 = value;
	}

	inline static int32_t get_offset_of_m_Resolution_2() { return static_cast<int32_t>(offsetof(CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447, ___m_Resolution_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_m_Resolution_2() const { return ___m_Resolution_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_m_Resolution_2() { return &___m_Resolution_2; }
	inline void set_m_Resolution_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___m_Resolution_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAINTRINSICS_TF5C8338837CCA8C112418715D15B806AD05B8447_H
#ifndef PLANEDETECTIONFLAGS_T973AF579C70632C3A6345A61C688B125C5864215_H
#define PLANEDETECTIONFLAGS_T973AF579C70632C3A6345A61C688B125C5864215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.PlaneDetectionFlags
struct  PlaneDetectionFlags_t973AF579C70632C3A6345A61C688B125C5864215 
{
public:
	// System.Int32 UnityEngine.XR.ARExtensions.PlaneDetectionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneDetectionFlags_t973AF579C70632C3A6345A61C688B125C5864215, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANEDETECTIONFLAGS_T973AF579C70632C3A6345A61C688B125C5864215_H
#ifndef PLANEDETECTIONFLAGSMASKATTRIBUTE_T891FFF72B896019B6EF9B5BC66B66B7482D85E36_H
#define PLANEDETECTIONFLAGSMASKATTRIBUTE_T891FFF72B896019B6EF9B5BC66B66B7482D85E36_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.PlaneDetectionFlagsMaskAttribute
struct  PlaneDetectionFlagsMaskAttribute_t891FFF72B896019B6EF9B5BC66B66B7482D85E36  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANEDETECTIONFLAGSMASKATTRIBUTE_T891FFF72B896019B6EF9B5BC66B66B7482D85E36_H
#ifndef SESSIONAVAILABILITY_T66AE38CEACBF09105F9564006DE37A94C9DB370F_H
#define SESSIONAVAILABILITY_T66AE38CEACBF09105F9564006DE37A94C9DB370F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.SessionAvailability
struct  SessionAvailability_t66AE38CEACBF09105F9564006DE37A94C9DB370F 
{
public:
	// System.Int32 UnityEngine.XR.ARExtensions.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_t66AE38CEACBF09105F9564006DE37A94C9DB370F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONAVAILABILITY_T66AE38CEACBF09105F9564006DE37A94C9DB370F_H
#ifndef SESSIONINSTALLATIONSTATUS_TB8FC754E8CCA38CA2F32E61B354743D33DA3939B_H
#define SESSIONINSTALLATIONSTATUS_TB8FC754E8CCA38CA2F32E61B354743D33DA3939B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.SessionInstallationStatus
struct  SessionInstallationStatus_tB8FC754E8CCA38CA2F32E61B354743D33DA3939B 
{
public:
	// System.Int32 UnityEngine.XR.ARExtensions.SessionInstallationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionInstallationStatus_tB8FC754E8CCA38CA2F32E61B354743D33DA3939B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONINSTALLATIONSTATUS_TB8FC754E8CCA38CA2F32E61B354743D33DA3939B_H
#ifndef ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#define ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef INTEGRATEDSUBSYSTEMDESCRIPTOR_1_TE49A4A877A02997708B6B07B8AAD97A792FC6E6F_H
#define INTEGRATEDSUBSYSTEMDESCRIPTOR_1_TE49A4A877A02997708B6B07B8AAD97A792FC6E6F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystemDescriptor`1<UnityEngine.Experimental.XR.XRCameraSubsystem>
struct  IntegratedSubsystemDescriptor_1_tE49A4A877A02997708B6B07B8AAD97A792FC6E6F  : public IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_pinvoke : public IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.Experimental.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_com : public IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshaled_com
{
};
#endif
#endif // INTEGRATEDSUBSYSTEMDESCRIPTOR_1_TE49A4A877A02997708B6B07B8AAD97A792FC6E6F_H
#ifndef INTEGRATEDSUBSYSTEMDESCRIPTOR_1_T2E3DE8CA270037E15A538AC982E62F97D235C402_H
#define INTEGRATEDSUBSYSTEMDESCRIPTOR_1_T2E3DE8CA270037E15A538AC982E62F97D235C402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystemDescriptor`1<UnityEngine.Experimental.XR.XRPlaneSubsystem>
struct  IntegratedSubsystemDescriptor_1_t2E3DE8CA270037E15A538AC982E62F97D235C402  : public IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_pinvoke : public IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.Experimental.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_com : public IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshaled_com
{
};
#endif
#endif // INTEGRATEDSUBSYSTEMDESCRIPTOR_1_T2E3DE8CA270037E15A538AC982E62F97D235C402_H
#ifndef INTEGRATEDSUBSYSTEMDESCRIPTOR_1_TD6F482D3CD6017E8A151A766A0256960111CF87D_H
#define INTEGRATEDSUBSYSTEMDESCRIPTOR_1_TD6F482D3CD6017E8A151A766A0256960111CF87D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystemDescriptor`1<UnityEngine.Experimental.XR.XRReferencePointSubsystem>
struct  IntegratedSubsystemDescriptor_1_tD6F482D3CD6017E8A151A766A0256960111CF87D  : public IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_pinvoke : public IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.Experimental.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_com : public IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshaled_com
{
};
#endif
#endif // INTEGRATEDSUBSYSTEMDESCRIPTOR_1_TD6F482D3CD6017E8A151A766A0256960111CF87D_H
#ifndef INTEGRATEDSUBSYSTEMDESCRIPTOR_1_TF665E440CCAC806B519AE2A6B46D74E9966B07FA_H
#define INTEGRATEDSUBSYSTEMDESCRIPTOR_1_TF665E440CCAC806B519AE2A6B46D74E9966B07FA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystemDescriptor`1<UnityEngine.Experimental.XR.XRSessionSubsystem>
struct  IntegratedSubsystemDescriptor_1_tF665E440CCAC806B519AE2A6B46D74E9966B07FA  : public IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_pinvoke : public IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.Experimental.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_t280E64AA13234D7EA8FE261ECC22D549B3640EBA_marshaled_com : public IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshaled_com
{
};
#endif
#endif // INTEGRATEDSUBSYSTEMDESCRIPTOR_1_TF665E440CCAC806B519AE2A6B46D74E9966B07FA_H
#ifndef INTEGRATEDSUBSYSTEM_1_T13F531EAA4D22C65C38F9A4EC080496DC444FC3D_H
#define INTEGRATEDSUBSYSTEM_1_T13F531EAA4D22C65C38F9A4EC080496DC444FC3D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor>
struct  IntegratedSubsystem_1_t13F531EAA4D22C65C38F9A4EC080496DC444FC3D  : public IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTEGRATEDSUBSYSTEM_1_T13F531EAA4D22C65C38F9A4EC080496DC444FC3D_H
#ifndef INTEGRATEDSUBSYSTEM_1_T5D53A066044FFF0B5A888DC279F870AE7CCE1AB6_H
#define INTEGRATEDSUBSYSTEM_1_T5D53A066044FFF0B5A888DC279F870AE7CCE1AB6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor>
struct  IntegratedSubsystem_1_t5D53A066044FFF0B5A888DC279F870AE7CCE1AB6  : public IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTEGRATEDSUBSYSTEM_1_T5D53A066044FFF0B5A888DC279F870AE7CCE1AB6_H
#ifndef INTEGRATEDSUBSYSTEM_1_TBC5DE3D32F4F7A2A85B915E23161D0E811F906AA_H
#define INTEGRATEDSUBSYSTEM_1_TBC5DE3D32F4F7A2A85B915E23161D0E811F906AA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRReferencePointSubsystemDescriptor>
struct  IntegratedSubsystem_1_tBC5DE3D32F4F7A2A85B915E23161D0E811F906AA  : public IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTEGRATEDSUBSYSTEM_1_TBC5DE3D32F4F7A2A85B915E23161D0E811F906AA_H
#ifndef INTEGRATEDSUBSYSTEM_1_TD7024C556BEBF93D22C6C88F64A35242D4DEB369_H
#define INTEGRATEDSUBSYSTEM_1_TD7024C556BEBF93D22C6C88F64A35242D4DEB369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRSessionSubsystemDescriptor>
struct  IntegratedSubsystem_1_tD7024C556BEBF93D22C6C88F64A35242D4DEB369  : public IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTEGRATEDSUBSYSTEM_1_TD7024C556BEBF93D22C6C88F64A35242D4DEB369_H
#ifndef PROMISE_1_T66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF_H
#define PROMISE_1_T66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionAvailability>
struct  Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARExtensions.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARExtensions.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROMISE_1_T66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF_H
#ifndef PROMISE_1_TBD5BCA0938AD2478C8AC6953371BD3E24D657C15_H
#define PROMISE_1_TBD5BCA0938AD2478C8AC6953371BD3E24D657C15_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>
struct  Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARExtensions.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARExtensions.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROMISE_1_TBD5BCA0938AD2478C8AC6953371BD3E24D657C15_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef FUNC_2_T8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78_H
#define FUNC_2_T8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>
struct  Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78_H
#ifndef FUNC_2_TD21C0AD1E10C99C0FC7A84082344E25F086499CD_H
#define FUNC_2_TD21C0AD1E10C99C0FC7A84082344E25F086499CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>
struct  Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_TD21C0AD1E10C99C0FC7A84082344E25F086499CD_H
#ifndef FUNC_2_T9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7_H
#define FUNC_2_T9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>
struct  Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7_H
#ifndef FUNC_3_T8142E55EC06EB0185AD099830F125CA5E187DDD8_H
#define FUNC_3_T8142E55EC06EB0185AD099830F125CA5E187DDD8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>
struct  Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T8142E55EC06EB0185AD099830F125CA5E187DDD8_H
#ifndef FUNC_3_TDF578AEA147B81628BA611F816D57E306CA287C4_H
#define FUNC_3_TDF578AEA147B81628BA611F816D57E306CA287C4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>
struct  Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_TDF578AEA147B81628BA611F816D57E306CA287C4_H
#ifndef FUNC_3_TADB96F4F6D4804C360DF07DE8146E2B4631B36B9_H
#define FUNC_3_TADB96F4F6D4804C360DF07DE8146E2B4631B36B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>
struct  Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_TADB96F4F6D4804C360DF07DE8146E2B4631B36B9_H
#ifndef FUNC_3_T1EF1CCE7ECB8A978928DF7EEDA4028100901CB48_H
#define FUNC_3_T1EF1CCE7ECB8A978928DF7EEDA4028100901CB48_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>
struct  Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T1EF1CCE7ECB8A978928DF7EEDA4028100901CB48_H
#ifndef FUNC_3_TE51207E7A242422D97436D398CA19D150FF94581_H
#define FUNC_3_TE51207E7A242422D97436D398CA19D150FF94581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>
struct  Func_3_tE51207E7A242422D97436D398CA19D150FF94581  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_TE51207E7A242422D97436D398CA19D150FF94581_H
#ifndef XRCAMERASUBSYSTEM_T9271DB5D8FEDD3431246FCB6D9257A940246E701_H
#define XRCAMERASUBSYSTEM_T9271DB5D8FEDD3431246FCB6D9257A940246E701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRCameraSubsystem
struct  XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701  : public IntegratedSubsystem_1_t13F531EAA4D22C65C38F9A4EC080496DC444FC3D
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.FrameReceivedEventArgs> UnityEngine.Experimental.XR.XRCameraSubsystem::FrameReceived
	Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC * ___FrameReceived_2;

public:
	inline static int32_t get_offset_of_FrameReceived_2() { return static_cast<int32_t>(offsetof(XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701, ___FrameReceived_2)); }
	inline Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC * get_FrameReceived_2() const { return ___FrameReceived_2; }
	inline Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC ** get_address_of_FrameReceived_2() { return &___FrameReceived_2; }
	inline void set_FrameReceived_2(Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC * value)
	{
		___FrameReceived_2 = value;
		Il2CppCodeGenWriteBarrier((&___FrameReceived_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRCAMERASUBSYSTEM_T9271DB5D8FEDD3431246FCB6D9257A940246E701_H
#ifndef XRCAMERASUBSYSTEMDESCRIPTOR_T46972B2D1CC489288B72CD0856AB7675B5EEEE6D_H
#define XRCAMERASUBSYSTEMDESCRIPTOR_T46972B2D1CC489288B72CD0856AB7675B5EEEE6D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor
struct  XRCameraSubsystemDescriptor_t46972B2D1CC489288B72CD0856AB7675B5EEEE6D  : public IntegratedSubsystemDescriptor_1_tE49A4A877A02997708B6B07B8AAD97A792FC6E6F
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRCAMERASUBSYSTEMDESCRIPTOR_T46972B2D1CC489288B72CD0856AB7675B5EEEE6D_H
#ifndef XRPLANESUBSYSTEM_T3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B_H
#define XRPLANESUBSYSTEM_T3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRPlaneSubsystem
struct  XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B  : public IntegratedSubsystem_1_t5D53A066044FFF0B5A888DC279F870AE7CCE1AB6
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.PlaneAddedEventArgs> UnityEngine.Experimental.XR.XRPlaneSubsystem::PlaneAdded
	Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6 * ___PlaneAdded_2;
	// System.Action`1<UnityEngine.Experimental.XR.PlaneUpdatedEventArgs> UnityEngine.Experimental.XR.XRPlaneSubsystem::PlaneUpdated
	Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6 * ___PlaneUpdated_3;
	// System.Action`1<UnityEngine.Experimental.XR.PlaneRemovedEventArgs> UnityEngine.Experimental.XR.XRPlaneSubsystem::PlaneRemoved
	Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991 * ___PlaneRemoved_4;

public:
	inline static int32_t get_offset_of_PlaneAdded_2() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B, ___PlaneAdded_2)); }
	inline Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6 * get_PlaneAdded_2() const { return ___PlaneAdded_2; }
	inline Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6 ** get_address_of_PlaneAdded_2() { return &___PlaneAdded_2; }
	inline void set_PlaneAdded_2(Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6 * value)
	{
		___PlaneAdded_2 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneAdded_2), value);
	}

	inline static int32_t get_offset_of_PlaneUpdated_3() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B, ___PlaneUpdated_3)); }
	inline Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6 * get_PlaneUpdated_3() const { return ___PlaneUpdated_3; }
	inline Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6 ** get_address_of_PlaneUpdated_3() { return &___PlaneUpdated_3; }
	inline void set_PlaneUpdated_3(Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6 * value)
	{
		___PlaneUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneUpdated_3), value);
	}

	inline static int32_t get_offset_of_PlaneRemoved_4() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B, ___PlaneRemoved_4)); }
	inline Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991 * get_PlaneRemoved_4() const { return ___PlaneRemoved_4; }
	inline Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991 ** get_address_of_PlaneRemoved_4() { return &___PlaneRemoved_4; }
	inline void set_PlaneRemoved_4(Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991 * value)
	{
		___PlaneRemoved_4 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneRemoved_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRPLANESUBSYSTEM_T3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B_H
#ifndef XRPLANESUBSYSTEMDESCRIPTOR_T0F6814B2CAD6778836A3A230A200600556C57D7F_H
#define XRPLANESUBSYSTEMDESCRIPTOR_T0F6814B2CAD6778836A3A230A200600556C57D7F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor
struct  XRPlaneSubsystemDescriptor_t0F6814B2CAD6778836A3A230A200600556C57D7F  : public IntegratedSubsystemDescriptor_1_t2E3DE8CA270037E15A538AC982E62F97D235C402
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRPLANESUBSYSTEMDESCRIPTOR_T0F6814B2CAD6778836A3A230A200600556C57D7F_H
#ifndef XRREFERENCEPOINTSUBSYSTEM_T9D4A49A2B6580143EF25399812034F001A18D00C_H
#define XRREFERENCEPOINTSUBSYSTEM_T9D4A49A2B6580143EF25399812034F001A18D00C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRReferencePointSubsystem
struct  XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C  : public IntegratedSubsystem_1_tBC5DE3D32F4F7A2A85B915E23161D0E811F906AA
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs> UnityEngine.Experimental.XR.XRReferencePointSubsystem::ReferencePointUpdated
	Action_1_t62CF34AD78617EF5FE6E7FCE5803CBE14C103FBD * ___ReferencePointUpdated_2;

public:
	inline static int32_t get_offset_of_ReferencePointUpdated_2() { return static_cast<int32_t>(offsetof(XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C, ___ReferencePointUpdated_2)); }
	inline Action_1_t62CF34AD78617EF5FE6E7FCE5803CBE14C103FBD * get_ReferencePointUpdated_2() const { return ___ReferencePointUpdated_2; }
	inline Action_1_t62CF34AD78617EF5FE6E7FCE5803CBE14C103FBD ** get_address_of_ReferencePointUpdated_2() { return &___ReferencePointUpdated_2; }
	inline void set_ReferencePointUpdated_2(Action_1_t62CF34AD78617EF5FE6E7FCE5803CBE14C103FBD * value)
	{
		___ReferencePointUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((&___ReferencePointUpdated_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRREFERENCEPOINTSUBSYSTEM_T9D4A49A2B6580143EF25399812034F001A18D00C_H
#ifndef XRREFERENCEPOINTSUBSYSTEMDESCRIPTOR_T0228E77788DA1EAB18104D6AB3DBAF5AF5CFA0D3_H
#define XRREFERENCEPOINTSUBSYSTEMDESCRIPTOR_T0228E77788DA1EAB18104D6AB3DBAF5AF5CFA0D3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRReferencePointSubsystemDescriptor
struct  XRReferencePointSubsystemDescriptor_t0228E77788DA1EAB18104D6AB3DBAF5AF5CFA0D3  : public IntegratedSubsystemDescriptor_1_tD6F482D3CD6017E8A151A766A0256960111CF87D
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRREFERENCEPOINTSUBSYSTEMDESCRIPTOR_T0228E77788DA1EAB18104D6AB3DBAF5AF5CFA0D3_H
#ifndef XRSESSIONSUBSYSTEM_T75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F_H
#define XRSESSIONSUBSYSTEM_T75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRSessionSubsystem
struct  XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F  : public IntegratedSubsystem_1_tD7024C556BEBF93D22C6C88F64A35242D4DEB369
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs> UnityEngine.Experimental.XR.XRSessionSubsystem::TrackingStateChanged
	Action_1_tFA24ECAFB569947BC1D041AECE3FD63058B301F9 * ___TrackingStateChanged_2;

public:
	inline static int32_t get_offset_of_TrackingStateChanged_2() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F, ___TrackingStateChanged_2)); }
	inline Action_1_tFA24ECAFB569947BC1D041AECE3FD63058B301F9 * get_TrackingStateChanged_2() const { return ___TrackingStateChanged_2; }
	inline Action_1_tFA24ECAFB569947BC1D041AECE3FD63058B301F9 ** get_address_of_TrackingStateChanged_2() { return &___TrackingStateChanged_2; }
	inline void set_TrackingStateChanged_2(Action_1_tFA24ECAFB569947BC1D041AECE3FD63058B301F9 * value)
	{
		___TrackingStateChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___TrackingStateChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRSESSIONSUBSYSTEM_T75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F_H
#ifndef XRSESSIONSUBSYSTEMDESCRIPTOR_TF69268DD404379B461569E4268BEC52FAFC9F3B9_H
#define XRSESSIONSUBSYSTEMDESCRIPTOR_TF69268DD404379B461569E4268BEC52FAFC9F3B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRSessionSubsystemDescriptor
struct  XRSessionSubsystemDescriptor_tF69268DD404379B461569E4268BEC52FAFC9F3B9  : public IntegratedSubsystemDescriptor_1_tF665E440CCAC806B519AE2A6B46D74E9966B07FA
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRSESSIONSUBSYSTEMDESCRIPTOR_TF69268DD404379B461569E4268BEC52FAFC9F3B9_H
#ifndef TRYGETCOLORCORRECTIONDELEGATE_T30B930C66D1DCEC1490F1A6624404BA665652BD8_H
#define TRYGETCOLORCORRECTIONDELEGATE_T30B930C66D1DCEC1490F1A6624404BA665652BD8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate
struct  TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRYGETCOLORCORRECTIONDELEGATE_T30B930C66D1DCEC1490F1A6624404BA665652BD8_H
#ifndef TRYGETINTRINSICSDELEGATE_TE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_H
#define TRYGETINTRINSICSDELEGATE_TE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetIntrinsicsDelegate
struct  TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRYGETINTRINSICSDELEGATE_TE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_H
#ifndef ATTACHREFERENCEPOINTDELEGATE_T8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_H
#define ATTACHREFERENCEPOINTDELEGATE_T8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRReferencePointExtensions_AttachReferencePointDelegate
struct  AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTACHREFERENCEPOINTDELEGATE_T8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_H
#ifndef ASYNCDELEGATE_1_TC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_H
#define ASYNCDELEGATE_1_TC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRSessionExtensions_AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>
struct  AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCDELEGATE_1_TC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_H
#ifndef ASYNCDELEGATE_1_T249767B2886936DE438787AE5D7C959A26DE03C3_H
#define ASYNCDELEGATE_1_T249767B2886936DE438787AE5D7C959A26DE03C3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARExtensions.XRSessionExtensions_AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>
struct  AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCDELEGATE_1_T249767B2886936DE438787AE5D7C959A26DE03C3_H
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !2 System.Func`3<System.Object,System.Int32Enum,System.Boolean>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR bool Func_3_Invoke_m1E4FDFF7A80DA62172AD3BA12E76519FF3F5B543_gshared (Func_3_t6392DC2203F787D95B49C4635E3583C79F8FB093 * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// !0 UnityEngine.Experimental.IntegratedSubsystem`1<System.Object>::get_SubsystemDescriptor()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * IntegratedSubsystem_1_get_SubsystemDescriptor_mAB20540E8977AA55603C49470D5FF77B675A3FC7_gshared (IntegratedSubsystem_1_t73613F32CADA1C0AD6BA0A43275D73052DCD5495 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m5153AE6EE06BA488EF3D92A0DCF7E4EF530961B5_gshared (Func_2_t7EE965B791A606D187CCB69569A433D4CBB36879 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.Object,System.Object>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mAB1757052B8F0EB459D4E96DCACFC92470D95ABB_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary0, RuntimeObject * ___key1, RuntimeObject * ___defaultValue2, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.IntPtr>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m5F90137F84D7FF83B00B83C603B6174E4060710D_gshared (Func_2_t9337A412B4AB908C8351EAE403EB6C41DD521F46 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,System.Int32Enum,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_3__ctor_m4884A92E58B46D79EDB0B211DAE0968600C5985E_gshared (Func_3_t6392DC2203F787D95B49C4635E3583C79F8FB093 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// !2 System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.Int32Enum>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m6AF7FA441FDDEEA30795121D675AC2D62D6A0205_gshared (Func_3_t02EAD622334675B6E9A4413BBFA96383CD4ADC0B * __this, RuntimeObject * p0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  p1, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_3__ctor_m29959CB112DD77FAD0992233B091F4818F5E3E21_gshared (Func_3_t0D29C26AE23B5B7E40EA3E30649C33FF48CBA50B * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_3__ctor_mBD866A19FBBB816AD1842388B789F4537454D74A_gshared (Func_3_t02EAD622334675B6E9A4413BBFA96383CD4ADC0B * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<System.Int32Enum>::Invoke(UnityEngine.Experimental.XR.XRSessionSubsystem)
extern "C" IL2CPP_METHOD_ATTR Promise_1_t86CAA07E2F0920F186E17389E61DF22419E422A1 * AsyncDelegate_1_Invoke_m1A3781AC66C6952D17435E2CD5D3BA3BF935BF2C_gshared (AsyncDelegate_1_t6A92F8D83CC29E18956F23A772F33CDBB4FB0D0A * __this, XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * p0, const RuntimeMethod* method);
// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.Promise`1<System.Int32Enum>::CreateResolvedPromise(T)
extern "C" IL2CPP_METHOD_ATTR Promise_1_t86CAA07E2F0920F186E17389E61DF22419E422A1 * Promise_1_CreateResolvedPromise_m033B95320CE69249E1F513DDE891F06C6FE561FE_gshared (int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AsyncDelegate_1__ctor_m0FB65AEC3C4E12A02ED0AC5FCAF1CEFC1AA39267_gshared (AsyncDelegate_1_t6A92F8D83CC29E18956F23A772F33CDBB4FB0D0A * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);

// UnityEngine.Vector2 UnityEngine.XR.ARExtensions.CameraIntrinsics::get_focalLength()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  CameraIntrinsics_get_focalLength_m6C9227C139EB42BF6B22278880AB1596ADED7991 (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.XR.ARExtensions.CameraIntrinsics::get_principalPoint()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  CameraIntrinsics_get_principalPoint_mC9CFA3636F2AA3942A0F72607CF52499971C955A (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.XR.ARExtensions.CameraIntrinsics::get_resolution()
extern "C" IL2CPP_METHOD_ATTR Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  CameraIntrinsics_get_resolution_mCCCC68A5429FE331004D65A013FD5425477B4836 (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARExtensions.CameraIntrinsics::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* CameraIntrinsics_ToString_m81D09512AC198EE7B31AFBCD4CEF0E73FA2EFB98 (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector2Int_GetHashCode_m73E874F4E94DF3D2603035E2E892873B139A7A9E (Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARExtensions.CameraIntrinsics::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t CameraIntrinsics_GetHashCode_mE783EB5693B89EF177FD0DB47678298FBD723663 (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARExtensions.CameraIntrinsics::Equals(UnityEngine.XR.ARExtensions.CameraIntrinsics)
extern "C" IL2CPP_METHOD_ATTR bool CameraIntrinsics_Equals_m8DB523604B8976B24F0C8E8598973D99FFB9E9EE (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARExtensions.CameraIntrinsics::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool CameraIntrinsics_Equals_m13D2C65BE0CFC69EEA170EF49F95600EDD913628 (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::Equals(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_Equals_mD6BF1A738E3CAF57BB46E604B030C072728F4EEB (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2Int::Equals(UnityEngine.Vector2Int)
extern "C" IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m65420C995F326F5C340E4825EA5E16BDE68F5A9C (Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * __this, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PropertyAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m7F5C473F39D5601486C1127DA0D52F2DC293FC35 (PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mC496CD75F50E5A2BB38ACE821F49C0D3385D82E7 (Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B * __this, String_t* p0, Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B *, String_t*, Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m73ABD1E1A16691C25D30237B64B3E3EF996D9715 (Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730 * __this, String_t* p0, Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730 *, String_t*, Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m01338E12C6B5864D0BB16DA72226BDCE64738FB1 (Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F * __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F *, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD3C38ECC0584DE6AE25BBC1C70C18FAF1A8175AD (Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF * __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF *, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m5D86F1BFFD50F0A56A458F57AB2747D1B8AF3E1C (Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF * __this, String_t* p0, Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF *, String_t*, Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m23AF7E3B31A2AFD77A1221B9C6634984310CDFAB (Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41 * __this, String_t* p0, TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41 *, String_t*, TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, p0, p1, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate::Invoke(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.Color&)
extern "C" IL2CPP_METHOD_ATTR bool TryGetColorCorrectionDelegate_Invoke_m524672D96048A135D83822527B4E1597D89F7BB7 (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * __this, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystems0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___color1, const RuntimeMethod* method);
// !2 System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>::Invoke(!0,!1)
inline bool Func_3_Invoke_m7D48EE1AECE9E364ABDC542EC70594B3461F6309 (Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 * __this, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 *, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, int32_t, const RuntimeMethod*))Func_3_Invoke_m1E4FDFF7A80DA62172AD3BA12E76519FF3F5B543_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::SetDefaultDelegates()
extern "C" IL2CPP_METHOD_ATTR void XRCameraExtensions_SetDefaultDelegates_mB63CACD38F7D4F76522D95050460244E5F7A782D (const RuntimeMethod* method);
// !0 UnityEngine.Experimental.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor>::get_SubsystemDescriptor()
inline XRCameraSubsystemDescriptor_t46972B2D1CC489288B72CD0856AB7675B5EEEE6D * IntegratedSubsystem_1_get_SubsystemDescriptor_m44E538F2E84B8923688EDAD3A06C44DC5FDF892C (IntegratedSubsystem_1_t13F531EAA4D22C65C38F9A4EC080496DC444FC3D * __this, const RuntimeMethod* method)
{
	return ((  XRCameraSubsystemDescriptor_t46972B2D1CC489288B72CD0856AB7675B5EEEE6D * (*) (IntegratedSubsystem_1_t13F531EAA4D22C65C38F9A4EC080496DC444FC3D *, const RuntimeMethod*))IntegratedSubsystem_1_get_SubsystemDescriptor_mAB20540E8977AA55603C49470D5FF77B675A3FC7_gshared)(__this, method);
}
// System.String UnityEngine.Experimental.IntegratedSubsystemDescriptor::get_id()
extern "C" IL2CPP_METHOD_ATTR String_t* IntegratedSubsystemDescriptor_get_id_m5D71CADC61C3D33BB8CB6233436AA36A096A6CC9 (IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCFC3CF6D2965D5643F83C2F8C59FFFC859C1188F (Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m5153AE6EE06BA488EF3D92A0DCF7E4EF530961B5_gshared)(__this, p0, p1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 * RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78_m45640912800E8166191496ABD621DBF457D02811 (Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B * ___dictionary0, String_t* ___key1, Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 * (*) (Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B *, String_t*, Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mAB1757052B8F0EB459D4E96DCACFC92470D95ABB_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TryGetColorCorrectionDelegate__ctor_m24DCA0F79CD8D0741CC55D5FC60FFA3F7E64CA6A (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * RegistrationHelper_GetValueOrDefault_TisString_t_TisTryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8_m60505F9AC18687E966CC7ED3496A086F56ABFD18 (Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0 * ___dictionary0, String_t* ___key1, TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * (*) (Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0 *, String_t*, TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mAB1757052B8F0EB459D4E96DCACFC92470D95ABB_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m61E59A212E6D58F5C791E61ED141BB754E02338E (Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m5F90137F84D7FF83B00B83C603B6174E4060710D_gshared)(__this, p0, p1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD * RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD_m6B87653F1782D4DAF6BACD80A771EE5B58CCA67F (Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730 * ___dictionary0, String_t* ___key1, Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD * (*) (Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730 *, String_t*, Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mAB1757052B8F0EB459D4E96DCACFC92470D95ABB_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline RuntimeObject* RegistrationHelper_GetValueOrDefault_TisString_t_TisICameraImageApi_tBAC003481E172628D623F3F9E7CFB8D2FD84EEE4_m082F1C83CF5A50364C1A2D40297567E068A3F297 (Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F * ___dictionary0, String_t* ___key1, RuntimeObject* ___defaultValue2, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F *, String_t*, RuntimeObject*, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mAB1757052B8F0EB459D4E96DCACFC92470D95ABB_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline RuntimeObject* RegistrationHelper_GetValueOrDefault_TisString_t_TisICameraConfigApi_t5694F28C505D2CA91EF77838138F419261B240BA_mE2CBE1BB4D605AE4A7572E748744F85EF99D8950 (Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF * ___dictionary0, String_t* ___key1, RuntimeObject* ___defaultValue2, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF *, String_t*, RuntimeObject*, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mAB1757052B8F0EB459D4E96DCACFC92470D95ABB_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m49911C9A2C73C5EF0BCCD24110DE90B1363183B6 (Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_m4884A92E58B46D79EDB0B211DAE0968600C5985E_gshared)(__this, p0, p1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 * RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8_m1E26A24B42AB2655A75814162D16395391D05EFA (Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF * ___dictionary0, String_t* ___key1, Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 * (*) (Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF *, String_t*, Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mAB1757052B8F0EB459D4E96DCACFC92470D95ABB_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TryGetIntrinsicsDelegate__ctor_m5AE264FC124A1998ECECE523C304EEF4218030FB (TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * RegistrationHelper_GetValueOrDefault_TisString_t_TisTryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_mA3D505049F576AA627FD977A5AD53EA2C62110DF (Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41 * ___dictionary0, String_t* ___key1, TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * (*) (Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41 *, String_t*, TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mAB1757052B8F0EB459D4E96DCACFC92470D95ABB_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>::.ctor()
inline void Dictionary_2__ctor_m643E732B084C22E10F428E442C63CABC97739D1B (Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>::.ctor()
inline void Dictionary_2__ctor_m16707E7385FD31BD4A1C11B5414CCCEDE1B55324 (Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>::.ctor()
inline void Dictionary_2__ctor_m2662F02533A78489FCB8E010E5FEBC06E3649B46 (Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>::.ctor()
inline void Dictionary_2__ctor_m6A85E7D2998C3CA167660D0E3A20B77125B1BF07 (Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>::.ctor()
inline void Dictionary_2__ctor_mCC1CE03ACFDECEE395368B14E3B0FDAF6C93E24C (Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>::.ctor()
inline void Dictionary_2__ctor_m8179D7EB766B8F6178D683EBFCDE2E14781FCD4D (Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate>::.ctor()
inline void Dictionary_2__ctor_m21D4F648E37C7E0EA81817958CCFAFDD3AA3CB5C (Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARExtensions.DefaultCameraImageApi::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DefaultCameraImageApi__ctor_mDEDB043C62A55BE5D99154D5068E8BEF0BB481C8 (DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARExtensions.DefaultCameraConfigApi::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DefaultCameraConfigApi__ctor_mCD3ADC17329DC4D3B9E2ACE4DDFE5086B29D2EA4 (DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m267C95737EFF9A1CE9D7832B871642FF8F29705C (Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467 * __this, String_t* p0, Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467 *, String_t*, Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mE00C497C9CAE1ABDE120E68F538A4E8EE5CD0B1C (Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409 * __this, String_t* p0, Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409 *, String_t*, Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m1020BBA7F3A266949B1A8B79FA4BE6C905DFE47C (Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6 * __this, String_t* p0, Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6 *, String_t*, Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, p0, p1, method);
}
// !2 System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>::Invoke(!0,!1)
inline int32_t Func_3_Invoke_m3D40CC159878F5E92BDC7BE11DA8167F3D75612B (Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 * __this, XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * p0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  p1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 *, XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , const RuntimeMethod*))Func_3_Invoke_m6AF7FA441FDDEEA30795121D675AC2D62D6A0205_gshared)(__this, p0, p1, method);
}
// !2 System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>::Invoke(!0,!1)
inline bool Func_3_Invoke_m4F60ED5F0BABFB4F912C327D357E40C4BD46671B (Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 * __this, XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 *, XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B *, int32_t, const RuntimeMethod*))Func_3_Invoke_m1E4FDFF7A80DA62172AD3BA12E76519FF3F5B543_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::SetDefaultDelegates()
extern "C" IL2CPP_METHOD_ATTR void XRPlaneExtensions_SetDefaultDelegates_m3D2EC86AE11A50A8E84A8587D02DD8FE921D8B0F (const RuntimeMethod* method);
// !0 UnityEngine.Experimental.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor>::get_SubsystemDescriptor()
inline XRPlaneSubsystemDescriptor_t0F6814B2CAD6778836A3A230A200600556C57D7F * IntegratedSubsystem_1_get_SubsystemDescriptor_mD368E13F76695FE0CD6C9AF5A2DC8E0AE714413B (IntegratedSubsystem_1_t5D53A066044FFF0B5A888DC279F870AE7CCE1AB6 * __this, const RuntimeMethod* method)
{
	return ((  XRPlaneSubsystemDescriptor_t0F6814B2CAD6778836A3A230A200600556C57D7F * (*) (IntegratedSubsystem_1_t5D53A066044FFF0B5A888DC279F870AE7CCE1AB6 *, const RuntimeMethod*))IntegratedSubsystem_1_get_SubsystemDescriptor_mAB20540E8977AA55603C49470D5FF77B675A3FC7_gshared)(__this, method);
}
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m1C763DFF7E6A78C335AF3BD8F044F005DCADCD54 (Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_m29959CB112DD77FAD0992233B091F4818F5E3E21_gshared)(__this, p0, p1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 * RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_tDF578AEA147B81628BA611F816D57E306CA287C4_mCB53B9BF241912777A76353D6DBE4B5A724BB92C (Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409 * ___dictionary0, String_t* ___key1, Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 * (*) (Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409 *, String_t*, Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mAB1757052B8F0EB459D4E96DCACFC92470D95ABB_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m60A1D11DC046E5AAC6161238DFEF40D3F1468256 (Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mBD866A19FBBB816AD1842388B789F4537454D74A_gshared)(__this, p0, p1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 * RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9_m6F581DD037A07EE0F8CA734146BBDC86CA5566C6 (Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467 * ___dictionary0, String_t* ___key1, Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 * (*) (Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467 *, String_t*, Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mAB1757052B8F0EB459D4E96DCACFC92470D95ABB_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m51FEFFEF582D06C381792FE1E35C5C4CE1EF4184 (Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_m4884A92E58B46D79EDB0B211DAE0968600C5985E_gshared)(__this, p0, p1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 * RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48_m86C3C373C6A23EF1BFA66BF917DD9C153ACEAEEC (Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6 * ___dictionary0, String_t* ___key1, Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 * (*) (Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6 *, String_t*, Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mAB1757052B8F0EB459D4E96DCACFC92470D95ABB_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>::.ctor()
inline void Dictionary_2__ctor_m35D6E74C094AF3C4EAD40E9735DEB971762F0BE1 (Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>::.ctor()
inline void Dictionary_2__ctor_m2C97257910E6AD37DD7E2D0750D81DADE6E6E721 (Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>::.ctor()
inline void Dictionary_2__ctor_m48C21C4B8491DCB1C5982E9B60A0E1ADF16CF12F (Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mF8E013984115986DB983BD7E1B7E75D9CAFCFF3E (Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554 * __this, String_t* p0, AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554 *, String_t*, AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m89B8D7C9D79A6F5DC0964575BA22DEE998489C14 (Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D * __this, String_t* p0, Func_3_tE51207E7A242422D97436D398CA19D150FF94581 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D *, String_t*, Func_3_tE51207E7A242422D97436D398CA19D150FF94581 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, p0, p1, method);
}
// UnityEngine.Experimental.XR.TrackableId UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate::Invoke(UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  AttachReferencePointDelegate_Invoke_mA3421081DBADE594B7EE7581F8286322BEA5E563 (AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * __this, XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * ___referencePointSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose2, const RuntimeMethod* method);
// UnityEngine.Experimental.XR.TrackableId UnityEngine.Experimental.XR.TrackableId::get_InvalidId()
extern "C" IL2CPP_METHOD_ATTR TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  TrackableId_get_InvalidId_m6A78BF219717CF4ACDF1D18C4E83CD187E8F9F27 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::SetDefaultDelegates()
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointExtensions_SetDefaultDelegates_m096C9D166DEAA60FF2F81C69042689E001699C67 (const RuntimeMethod* method);
// !0 UnityEngine.Experimental.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRReferencePointSubsystemDescriptor>::get_SubsystemDescriptor()
inline XRReferencePointSubsystemDescriptor_t0228E77788DA1EAB18104D6AB3DBAF5AF5CFA0D3 * IntegratedSubsystem_1_get_SubsystemDescriptor_mF62CCD4746521AF905E114C9518FE70318CB8B8C (IntegratedSubsystem_1_tBC5DE3D32F4F7A2A85B915E23161D0E811F906AA * __this, const RuntimeMethod* method)
{
	return ((  XRReferencePointSubsystemDescriptor_t0228E77788DA1EAB18104D6AB3DBAF5AF5CFA0D3 * (*) (IntegratedSubsystem_1_tBC5DE3D32F4F7A2A85B915E23161D0E811F906AA *, const RuntimeMethod*))IntegratedSubsystem_1_get_SubsystemDescriptor_mAB20540E8977AA55603C49470D5FF77B675A3FC7_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AttachReferencePointDelegate__ctor_m217CAFB3BEA1BADC08A86B0E980CC34400B8A86C (AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * RegistrationHelper_GetValueOrDefault_TisString_t_TisAttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_mE6C1581CC482A6DDE3B56CF374D299C1A20EEE0E (Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554 * ___dictionary0, String_t* ___key1, AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * (*) (Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554 *, String_t*, AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mAB1757052B8F0EB459D4E96DCACFC92470D95ABB_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mC2E506B45E73329F595198888231F1EA2CF89E52 (Func_3_tE51207E7A242422D97436D398CA19D150FF94581 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tE51207E7A242422D97436D398CA19D150FF94581 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_m29959CB112DD77FAD0992233B091F4818F5E3E21_gshared)(__this, p0, p1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline Func_3_tE51207E7A242422D97436D398CA19D150FF94581 * RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_tE51207E7A242422D97436D398CA19D150FF94581_mF767B3BB4324668A19D8E1B7FB615606D06BAFE6 (Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D * ___dictionary0, String_t* ___key1, Func_3_tE51207E7A242422D97436D398CA19D150FF94581 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Func_3_tE51207E7A242422D97436D398CA19D150FF94581 * (*) (Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D *, String_t*, Func_3_tE51207E7A242422D97436D398CA19D150FF94581 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mAB1757052B8F0EB459D4E96DCACFC92470D95ABB_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>::.ctor()
inline void Dictionary_2__ctor_mFFD4C5AC6A89C26348842C16AEE9930EDA9A6D91 (Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>::.ctor()
inline void Dictionary_2__ctor_mD2B5C280676BB7344912E08FB2D614016806F1F2 (Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m3810570CC05C47FBA418C223B89A285988EC0733 (Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7 * __this, String_t* p0, Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7 *, String_t*, Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m90C6195E1685E0FECE925DB1FC5B561053930193 (Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344 * __this, String_t* p0, AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344 *, String_t*, AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, p0, p1, method);
}
// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>::Invoke(UnityEngine.Experimental.XR.XRSessionSubsystem)
inline Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * AsyncDelegate_1_Invoke_m106CF5901441272D1BAAA67E469EDCD5A05201EB (AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * __this, XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * p0, const RuntimeMethod* method)
{
	return ((  Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * (*) (AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 *, XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F *, const RuntimeMethod*))AsyncDelegate_1_Invoke_m1A3781AC66C6952D17435E2CD5D3BA3BF935BF2C_gshared)(__this, p0, method);
}
// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionAvailability>::CreateResolvedPromise(T)
inline Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * Promise_1_CreateResolvedPromise_m548F7D4E240E44FFBBB8D3942AF9ABD34C6DEE4A (int32_t p0, const RuntimeMethod* method)
{
	return ((  Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_m033B95320CE69249E1F513DDE891F06C6FE561FE_gshared)(p0, method);
}
// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>::Invoke(UnityEngine.Experimental.XR.XRSessionSubsystem)
inline Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15 * AsyncDelegate_1_Invoke_mE4C5BF27A0BA0E736BF0B6883E1FCE03CC2D94E4 (AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * __this, XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * p0, const RuntimeMethod* method)
{
	return ((  Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15 * (*) (AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 *, XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F *, const RuntimeMethod*))AsyncDelegate_1_Invoke_m1A3781AC66C6952D17435E2CD5D3BA3BF935BF2C_gshared)(__this, p0, method);
}
// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>::CreateResolvedPromise(T)
inline Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15 * Promise_1_CreateResolvedPromise_m7EC83AB3701AC7742546873D51CF5D0C5E39569C (int32_t p0, const RuntimeMethod* method)
{
	return ((  Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15 * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_m033B95320CE69249E1F513DDE891F06C6FE561FE_gshared)(p0, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions::SetDefaultDelegates()
extern "C" IL2CPP_METHOD_ATTR void XRSessionExtensions_SetDefaultDelegates_m74F7CC39ACF2F34EC27D4EC79C7CC45D85A99542 (const RuntimeMethod* method);
// !0 UnityEngine.Experimental.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRSessionSubsystemDescriptor>::get_SubsystemDescriptor()
inline XRSessionSubsystemDescriptor_tF69268DD404379B461569E4268BEC52FAFC9F3B9 * IntegratedSubsystem_1_get_SubsystemDescriptor_mAE9913A45DC61E5CA0A88DCEF4463FA10D858638 (IntegratedSubsystem_1_tD7024C556BEBF93D22C6C88F64A35242D4DEB369 * __this, const RuntimeMethod* method)
{
	return ((  XRSessionSubsystemDescriptor_tF69268DD404379B461569E4268BEC52FAFC9F3B9 * (*) (IntegratedSubsystem_1_tD7024C556BEBF93D22C6C88F64A35242D4DEB369 *, const RuntimeMethod*))IntegratedSubsystem_1_get_SubsystemDescriptor_mAB20540E8977AA55603C49470D5FF77B675A3FC7_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>::.ctor(System.Object,System.IntPtr)
inline void AsyncDelegate_1__ctor_m178AD63E291123B72AEC9F7C35FA027D08840DC0 (AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))AsyncDelegate_1__ctor_m0FB65AEC3C4E12A02ED0AC5FCAF1CEFC1AA39267_gshared)(__this, p0, p1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * RegistrationHelper_GetValueOrDefault_TisString_t_TisAsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3_m971FCCDF1603B10293982EB3DE754F833E20E460 (Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F * ___dictionary0, String_t* ___key1, AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * (*) (Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F *, String_t*, AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mAB1757052B8F0EB459D4E96DCACFC92470D95ABB_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>::.ctor(System.Object,System.IntPtr)
inline void AsyncDelegate_1__ctor_m3FB654DEB58EFDC175AF92D33A92B4C3860D8476 (AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 *, RuntimeObject *, intptr_t, const RuntimeMethod*))AsyncDelegate_1__ctor_m0FB65AEC3C4E12A02ED0AC5FCAF1CEFC1AA39267_gshared)(__this, p0, p1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * RegistrationHelper_GetValueOrDefault_TisString_t_TisAsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_m6B2EADA8715B927389A7DC2E317017D443211AB6 (Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344 * ___dictionary0, String_t* ___key1, AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * (*) (Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344 *, String_t*, AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mAB1757052B8F0EB459D4E96DCACFC92470D95ABB_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB1A7B68BFD8D0626F06D618BC846059C86F09F8D (Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m5F90137F84D7FF83B00B83C603B6174E4060710D_gshared)(__this, p0, p1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 * RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7_m12524AE49DF5A096121774F7DD9CE14EB9D85666 (Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7 * ___dictionary0, String_t* ___key1, Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 * (*) (Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7 *, String_t*, Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mAB1757052B8F0EB459D4E96DCACFC92470D95ABB_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>>::.ctor()
inline void Dictionary_2__ctor_mEB537A1B57E4CF73E858D74630BD0E13B4E5BE0B (Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>::.ctor()
inline void Dictionary_2__ctor_mEE5CDB5DF2AF290A068637D1D32112872F183809 (Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>>::.ctor()
inline void Dictionary_2__ctor_m50FC80961BFFAF18A53884A6A9E034D3248EC5FB (Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 UnityEngine.XR.ARExtensions.CameraIntrinsics::get_focalLength()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  CameraIntrinsics_get_focalLength_m6C9227C139EB42BF6B22278880AB1596ADED7991 (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_m_FocalLength_0();
		return L_0;
	}
}
extern "C"  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  CameraIntrinsics_get_focalLength_m6C9227C139EB42BF6B22278880AB1596ADED7991_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *>(__this + 1);
	return CameraIntrinsics_get_focalLength_m6C9227C139EB42BF6B22278880AB1596ADED7991(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.XR.ARExtensions.CameraIntrinsics::get_principalPoint()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  CameraIntrinsics_get_principalPoint_mC9CFA3636F2AA3942A0F72607CF52499971C955A (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_m_PrincipalPoint_1();
		return L_0;
	}
}
extern "C"  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  CameraIntrinsics_get_principalPoint_mC9CFA3636F2AA3942A0F72607CF52499971C955A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *>(__this + 1);
	return CameraIntrinsics_get_principalPoint_mC9CFA3636F2AA3942A0F72607CF52499971C955A(_thisAdjusted, method);
}
// UnityEngine.Vector2Int UnityEngine.XR.ARExtensions.CameraIntrinsics::get_resolution()
extern "C" IL2CPP_METHOD_ATTR Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  CameraIntrinsics_get_resolution_mCCCC68A5429FE331004D65A013FD5425477B4836 (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method)
{
	{
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_0 = __this->get_m_Resolution_2();
		return L_0;
	}
}
extern "C"  Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  CameraIntrinsics_get_resolution_mCCCC68A5429FE331004D65A013FD5425477B4836_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *>(__this + 1);
	return CameraIntrinsics_get_resolution_mCCCC68A5429FE331004D65A013FD5425477B4836(_thisAdjusted, method);
}
// System.String UnityEngine.XR.ARExtensions.CameraIntrinsics::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* CameraIntrinsics_ToString_m81D09512AC198EE7B31AFBCD4CEF0E73FA2EFB98 (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraIntrinsics_ToString_m81D09512AC198EE7B31AFBCD4CEF0E73FA2EFB98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = CameraIntrinsics_get_focalLength_m6C9227C139EB42BF6B22278880AB1596ADED7991((CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *)__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = L_0;
		RuntimeObject * L_2 = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = CameraIntrinsics_get_principalPoint_mC9CFA3636F2AA3942A0F72607CF52499971C955A((CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *)__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = L_3;
		RuntimeObject * L_5 = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &L_4);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_6 = CameraIntrinsics_get_resolution_mCCCC68A5429FE331004D65A013FD5425477B4836((CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *)__this, /*hidden argument*/NULL);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_7 = L_6;
		RuntimeObject * L_8 = Box(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteral8ACABC1B8A6A5FFEBE5548DF5488F4E557AC0AA4, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
extern "C"  String_t* CameraIntrinsics_ToString_m81D09512AC198EE7B31AFBCD4CEF0E73FA2EFB98_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *>(__this + 1);
	return CameraIntrinsics_ToString_m81D09512AC198EE7B31AFBCD4CEF0E73FA2EFB98(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARExtensions.CameraIntrinsics::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t CameraIntrinsics_GetHashCode_mE783EB5693B89EF177FD0DB47678298FBD723663 (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_0 = __this->get_address_of_m_FocalLength_0();
		int32_t L_1 = Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_0, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_2 = __this->get_address_of_m_PrincipalPoint_1();
		int32_t L_3 = Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_2, /*hidden argument*/NULL);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * L_4 = __this->get_address_of_m_Resolution_2();
		int32_t L_5 = Vector2Int_GetHashCode_m73E874F4E94DF3D2603035E2E892873B139A7A9E((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)L_4, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5));
	}
}
extern "C"  int32_t CameraIntrinsics_GetHashCode_mE783EB5693B89EF177FD0DB47678298FBD723663_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *>(__this + 1);
	return CameraIntrinsics_GetHashCode_mE783EB5693B89EF177FD0DB47678298FBD723663(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARExtensions.CameraIntrinsics::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool CameraIntrinsics_Equals_m13D2C65BE0CFC69EEA170EF49F95600EDD913628 (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraIntrinsics_Equals_m13D2C65BE0CFC69EEA170EF49F95600EDD913628_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = CameraIntrinsics_Equals_m8DB523604B8976B24F0C8E8598973D99FFB9E9EE((CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *)__this, ((*(CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *)((CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *)UnBox(L_1, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  bool CameraIntrinsics_Equals_m13D2C65BE0CFC69EEA170EF49F95600EDD913628_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *>(__this + 1);
	return CameraIntrinsics_Equals_m13D2C65BE0CFC69EEA170EF49F95600EDD913628(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARExtensions.CameraIntrinsics::Equals(UnityEngine.XR.ARExtensions.CameraIntrinsics)
extern "C" IL2CPP_METHOD_ATTR bool CameraIntrinsics_Equals_m8DB523604B8976B24F0C8E8598973D99FFB9E9EE (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447  ___other0, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_0 = __this->get_address_of_m_FocalLength_0();
		CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447  L_1 = ___other0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = L_1.get_m_FocalLength_0();
		bool L_3 = Vector2_Equals_mD6BF1A738E3CAF57BB46E604B030C072728F4EEB((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_4 = __this->get_address_of_m_PrincipalPoint_1();
		CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447  L_5 = ___other0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = L_5.get_m_PrincipalPoint_1();
		bool L_7 = Vector2_Equals_mD6BF1A738E3CAF57BB46E604B030C072728F4EEB((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * L_8 = __this->get_address_of_m_Resolution_2();
		CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447  L_9 = ___other0;
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_10 = L_9.get_m_Resolution_2();
		bool L_11 = Vector2Int_Equals_m65420C995F326F5C340E4825EA5E16BDE68F5A9C((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)L_8, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0038:
	{
		return (bool)0;
	}
}
extern "C"  bool CameraIntrinsics_Equals_m8DB523604B8976B24F0C8E8598973D99FFB9E9EE_AdjustorThunk (RuntimeObject * __this, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447  ___other0, const RuntimeMethod* method)
{
	CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *>(__this + 1);
	return CameraIntrinsics_Equals_m8DB523604B8976B24F0C8E8598973D99FFB9E9EE(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.DefaultCameraConfigApi::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DefaultCameraConfigApi__ctor_mCD3ADC17329DC4D3B9E2ACE4DDFE5086B29D2EA4 (DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.DefaultCameraImageApi::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DefaultCameraImageApi__ctor_mDEDB043C62A55BE5D99154D5068E8BEF0BB481C8 (DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.PlaneDetectionFlagsMaskAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlaneDetectionFlagsMaskAttribute__ctor_mBB9A70A2BF40A9E1AEE09C227A371EE204B132C0 (PlaneDetectionFlagsMaskAttribute_t891FFF72B896019B6EF9B5BC66B66B7482D85E36 * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_m7F5C473F39D5601486C1127DA0D52F2DC293FC35(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARExtensions.SessionAvailabilityExtensions::IsSupported(UnityEngine.XR.ARExtensions.SessionAvailability)
extern "C" IL2CPP_METHOD_ATTR bool SessionAvailabilityExtensions_IsSupported_mF7726F1FAE8E83E82DEBB1440BAE05B6349C11C0 (int32_t ___availability0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___availability0;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.SessionAvailabilityExtensions::IsInstalled(UnityEngine.XR.ARExtensions.SessionAvailability)
extern "C" IL2CPP_METHOD_ATTR bool SessionAvailabilityExtensions_IsInstalled_mEB1702DEE2B07612638723BC414DEF9CFAB8B041 (int32_t ___availability0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___availability0;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterIsPermissionGrantedHandler(System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterIsPermissionGrantedHandler_m2A2352EF4DAF86AE18F6C3ACB9ACFD75D4D83913 (String_t* ___subsystemId0, Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_RegisterIsPermissionGrantedHandler_m2A2352EF4DAF86AE18F6C3ACB9ACFD75D4D83913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B * L_0 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_IsPermissionGrantedDelegates_9();
		String_t* L_1 = ___subsystemId0;
		Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mC496CD75F50E5A2BB38ACE821F49C0D3385D82E7(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_mC496CD75F50E5A2BB38ACE821F49C0D3385D82E7_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterGetNativePtrHandler(System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>)
extern "C" IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterGetNativePtrHandler_m75D282B40547D8493224A9889D48759E3FF0874B (String_t* ___subsystemId0, Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_RegisterGetNativePtrHandler_m75D282B40547D8493224A9889D48759E3FF0874B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730 * L_0 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_GetNativePtrDelegates_11();
		String_t* L_1 = ___subsystemId0;
		Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m73ABD1E1A16691C25D30237B64B3E3EF996D9715(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m73ABD1E1A16691C25D30237B64B3E3EF996D9715_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterCameraImageApi(System.String,UnityEngine.XR.ARExtensions.ICameraImageApi)
extern "C" IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterCameraImageApi_mB4066B0FFF787581964F3C0EEEC0F2A46474BA2A (String_t* ___subsystemId0, RuntimeObject* ___api1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_RegisterCameraImageApi_mB4066B0FFF787581964F3C0EEEC0F2A46474BA2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F * L_0 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_CameraImageApis_12();
		String_t* L_1 = ___subsystemId0;
		RuntimeObject* L_2 = ___api1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m01338E12C6B5864D0BB16DA72226BDCE64738FB1(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m01338E12C6B5864D0BB16DA72226BDCE64738FB1_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterCameraConfigApi(System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi)
extern "C" IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterCameraConfigApi_mB7AD2C2B66CB769D9245D4465AFFBBEE53FEDC1F (String_t* ___subsystemId0, RuntimeObject* ___api1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_RegisterCameraConfigApi_mB7AD2C2B66CB769D9245D4465AFFBBEE53FEDC1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF * L_0 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_CameraConfigApis_13();
		String_t* L_1 = ___subsystemId0;
		RuntimeObject* L_2 = ___api1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mD3C38ECC0584DE6AE25BBC1C70C18FAF1A8175AD(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_mD3C38ECC0584DE6AE25BBC1C70C18FAF1A8175AD_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterTrySetFocusModeHandler(System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterTrySetFocusModeHandler_m72F2A926B7DCBE38C79A79B78071F26B76C878DE (String_t* ___subsystemId0, Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_RegisterTrySetFocusModeHandler_m72F2A926B7DCBE38C79A79B78071F26B76C878DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF * L_0 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_TrySetFocusModeDelegates_14();
		String_t* L_1 = ___subsystemId0;
		Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m5D86F1BFFD50F0A56A458F57AB2747D1B8AF3E1C(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m5D86F1BFFD50F0A56A458F57AB2747D1B8AF3E1C_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterTryGetIntrinsicsHandler(System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetIntrinsicsDelegate)
extern "C" IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterTryGetIntrinsicsHandler_m569851368C811243DC8016E07DF4A0EEA714C1C2 (String_t* ___subsystemId0, TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_RegisterTryGetIntrinsicsHandler_m569851368C811243DC8016E07DF4A0EEA714C1C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41 * L_0 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_TryGetIntrinsicsDelegates_15();
		String_t* L_1 = ___subsystemId0;
		TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m23AF7E3B31A2AFD77A1221B9C6634984310CDFAB(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m23AF7E3B31A2AFD77A1221B9C6634984310CDFAB_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions::TryGetColorCorrection(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.ColorU26)
extern "C" IL2CPP_METHOD_ATTR bool XRCameraExtensions_TryGetColorCorrection_mF916E96F39B8E7EDDAEC17BF02448F03C6BF7B84 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_TryGetColorCorrection_mF916E96F39B8E7EDDAEC17BF02448F03C6BF7B84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * L_0 = ___cameraSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralC28544CF6E443E95BB4A90955468E5F3F7D37199, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRCameraExtensions_TryGetColorCorrection_mF916E96F39B8E7EDDAEC17BF02448F03C6BF7B84_RuntimeMethod_var);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * L_2 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_TryGetColorCorrectionDelegate_1();
		XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * L_3 = ___cameraSubsystem0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * L_4 = ___color1;
		NullCheck(L_2);
		bool L_5 = TryGetColorCorrectionDelegate_Invoke_m524672D96048A135D83822527B4E1597D89F7BB7(L_2, L_3, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions::TrySetFocusMode(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode)
extern "C" IL2CPP_METHOD_ATTR bool XRCameraExtensions_TrySetFocusMode_mC8592ACD3AC988398132D4DE48C09409CA647885 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, int32_t ___mode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_TrySetFocusMode_mC8592ACD3AC988398132D4DE48C09409CA647885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * L_0 = ___cameraSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralC28544CF6E443E95BB4A90955468E5F3F7D37199, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRCameraExtensions_TrySetFocusMode_mC8592ACD3AC988398132D4DE48C09409CA647885_RuntimeMethod_var);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 * L_2 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_TrySetFocusModeDelegate_7();
		XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * L_3 = ___cameraSubsystem0;
		int32_t L_4 = ___mode1;
		NullCheck(L_2);
		bool L_5 = Func_3_Invoke_m7D48EE1AECE9E364ABDC542EC70594B3461F6309(L_2, L_3, L_4, /*hidden argument*/Func_3_Invoke_m7D48EE1AECE9E364ABDC542EC70594B3461F6309_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::ActivateExtensions(UnityEngine.Experimental.XR.XRCameraSubsystem)
extern "C" IL2CPP_METHOD_ATTR void XRCameraExtensions_ActivateExtensions_m2292524D7A66F76A611DDA3121451813950F6614 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_ActivateExtensions_m2292524D7A66F76A611DDA3121451813950F6614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * L_0 = ___cameraSubsystem0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		XRCameraExtensions_SetDefaultDelegates_mB63CACD38F7D4F76522D95050460244E5F7A782D(/*hidden argument*/NULL);
		return;
	}

IL_0009:
	{
		XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * L_1 = ___cameraSubsystem0;
		NullCheck(L_1);
		XRCameraSubsystemDescriptor_t46972B2D1CC489288B72CD0856AB7675B5EEEE6D * L_2 = IntegratedSubsystem_1_get_SubsystemDescriptor_m44E538F2E84B8923688EDAD3A06C44DC5FDF892C(L_1, /*hidden argument*/IntegratedSubsystem_1_get_SubsystemDescriptor_m44E538F2E84B8923688EDAD3A06C44DC5FDF892C_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3 = IntegratedSubsystemDescriptor_get_id_m5D71CADC61C3D33BB8CB6233436AA36A096A6CC9(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B * L_4 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_IsPermissionGrantedDelegates_9();
		String_t* L_5 = V_0;
		Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 * L_6 = (Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 *)il2cpp_codegen_object_new(Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78_il2cpp_TypeInfo_var);
		Func_2__ctor_mCFC3CF6D2965D5643F83C2F8C59FFFC859C1188F(L_6, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultIsPermissionGranted_mEF72865F99D3DA98F9EC1898C62D6B57E0FFE505_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mCFC3CF6D2965D5643F83C2F8C59FFFC859C1188F_RuntimeMethod_var);
		Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 * L_7 = RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78_m45640912800E8166191496ABD621DBF457D02811(L_4, L_5, L_6, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78_m45640912800E8166191496ABD621DBF457D02811_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_IsPermissionGrantedDelegate_0(L_7);
		Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0 * L_8 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_TryGetColorCorrectionDelegates_10();
		String_t* L_9 = V_0;
		TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * L_10 = (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 *)il2cpp_codegen_object_new(TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8_il2cpp_TypeInfo_var);
		TryGetColorCorrectionDelegate__ctor_m24DCA0F79CD8D0741CC55D5FC60FFA3F7E64CA6A(L_10, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultTryGetColorCorrection_m1998DE2BB46D10F87B59F1BE0FA463F898D2FDDB_RuntimeMethod_var), /*hidden argument*/NULL);
		TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * L_11 = RegistrationHelper_GetValueOrDefault_TisString_t_TisTryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8_m60505F9AC18687E966CC7ED3496A086F56ABFD18(L_8, L_9, L_10, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisTryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8_m60505F9AC18687E966CC7ED3496A086F56ABFD18_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TryGetColorCorrectionDelegate_1(L_11);
		Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730 * L_12 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_GetNativePtrDelegates_11();
		String_t* L_13 = V_0;
		Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD * L_14 = (Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD *)il2cpp_codegen_object_new(Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD_il2cpp_TypeInfo_var);
		Func_2__ctor_m61E59A212E6D58F5C791E61ED141BB754E02338E(L_14, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultGetNativePtr_m5FB391B315530EFAB58CCF831FCBE3A6FA2BA81D_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m61E59A212E6D58F5C791E61ED141BB754E02338E_RuntimeMethod_var);
		Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD * L_15 = RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD_m6B87653F1782D4DAF6BACD80A771EE5B58CCA67F(L_12, L_13, L_14, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD_m6B87653F1782D4DAF6BACD80A771EE5B58CCA67F_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegate_2(L_15);
		Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F * L_16 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_CameraImageApis_12();
		String_t* L_17 = V_0;
		DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * L_18 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_DefaultCameraImageApi_4();
		RuntimeObject* L_19 = RegistrationHelper_GetValueOrDefault_TisString_t_TisICameraImageApi_tBAC003481E172628D623F3F9E7CFB8D2FD84EEE4_m082F1C83CF5A50364C1A2D40297567E068A3F297(L_16, L_17, L_18, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisICameraImageApi_tBAC003481E172628D623F3F9E7CFB8D2FD84EEE4_m082F1C83CF5A50364C1A2D40297567E068A3F297_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_CameraImageApi_3(L_19);
		Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF * L_20 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_CameraConfigApis_13();
		String_t* L_21 = V_0;
		DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * L_22 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_DefaultCameraConfigApi_6();
		RuntimeObject* L_23 = RegistrationHelper_GetValueOrDefault_TisString_t_TisICameraConfigApi_t5694F28C505D2CA91EF77838138F419261B240BA_mE2CBE1BB4D605AE4A7572E748744F85EF99D8950(L_20, L_21, L_22, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisICameraConfigApi_t5694F28C505D2CA91EF77838138F419261B240BA_mE2CBE1BB4D605AE4A7572E748744F85EF99D8950_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_CameraConfigApi_5(L_23);
		Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF * L_24 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_TrySetFocusModeDelegates_14();
		String_t* L_25 = V_0;
		Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 * L_26 = (Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 *)il2cpp_codegen_object_new(Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8_il2cpp_TypeInfo_var);
		Func_3__ctor_m49911C9A2C73C5EF0BCCD24110DE90B1363183B6(L_26, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultTrySetFocusMode_mFCABA60BEA3964850986E49F3E6D799652633DD6_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m49911C9A2C73C5EF0BCCD24110DE90B1363183B6_RuntimeMethod_var);
		Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 * L_27 = RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8_m1E26A24B42AB2655A75814162D16395391D05EFA(L_24, L_25, L_26, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8_m1E26A24B42AB2655A75814162D16395391D05EFA_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TrySetFocusModeDelegate_7(L_27);
		Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41 * L_28 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_TryGetIntrinsicsDelegates_15();
		String_t* L_29 = V_0;
		TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * L_30 = (TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 *)il2cpp_codegen_object_new(TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_il2cpp_TypeInfo_var);
		TryGetIntrinsicsDelegate__ctor_m5AE264FC124A1998ECECE523C304EEF4218030FB(L_30, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultTryGetIntrinsics_mA2F93BFBD0D95DAE57DF7F5D16D7E994A93BC2F6_RuntimeMethod_var), /*hidden argument*/NULL);
		TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * L_31 = RegistrationHelper_GetValueOrDefault_TisString_t_TisTryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_mA3D505049F576AA627FD977A5AD53EA2C62110DF(L_28, L_29, L_30, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisTryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_mA3D505049F576AA627FD977A5AD53EA2C62110DF_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TryGetIntrinsicsDelegate_8(L_31);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions::DefaultIsPermissionGranted(UnityEngine.Experimental.XR.XRCameraSubsystem)
extern "C" IL2CPP_METHOD_ATTR bool XRCameraExtensions_DefaultIsPermissionGranted_mEF72865F99D3DA98F9EC1898C62D6B57E0FFE505 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions::DefaultTryGetColorCorrection(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.ColorU26)
extern "C" IL2CPP_METHOD_ATTR bool XRCameraExtensions_DefaultTryGetColorCorrection_m1998DE2BB46D10F87B59F1BE0FA463F898D2FDDB (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___color1, const RuntimeMethod* method)
{
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * L_0 = ___color1;
		il2cpp_codegen_initobj(L_0, sizeof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 ));
		return (bool)0;
	}
}
// System.IntPtr UnityEngine.XR.ARExtensions.XRCameraExtensions::DefaultGetNativePtr(UnityEngine.Experimental.XR.XRCameraSubsystem)
extern "C" IL2CPP_METHOD_ATTR intptr_t XRCameraExtensions_DefaultGetNativePtr_m5FB391B315530EFAB58CCF831FCBE3A6FA2BA81D (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_DefaultGetNativePtr_m5FB391B315530EFAB58CCF831FCBE3A6FA2BA81D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return (intptr_t)(0);
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions::DefaultTrySetFocusMode(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode)
extern "C" IL2CPP_METHOD_ATTR bool XRCameraExtensions_DefaultTrySetFocusMode_mFCABA60BEA3964850986E49F3E6D799652633DD6 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions::DefaultTryGetIntrinsics(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraIntrinsicsU26)
extern "C" IL2CPP_METHOD_ATTR bool XRCameraExtensions_DefaultTryGetIntrinsics_mA2F93BFBD0D95DAE57DF7F5D16D7E994A93BC2F6 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * ___cameraIntrinsics1, const RuntimeMethod* method)
{
	{
		CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * L_0 = ___cameraIntrinsics1;
		il2cpp_codegen_initobj(L_0, sizeof(CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 ));
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::SetDefaultDelegates()
extern "C" IL2CPP_METHOD_ATTR void XRCameraExtensions_SetDefaultDelegates_mB63CACD38F7D4F76522D95050460244E5F7A782D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_SetDefaultDelegates_mB63CACD38F7D4F76522D95050460244E5F7A782D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 * L_0 = (Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78 *)il2cpp_codegen_object_new(Func_2_t8DD4B98590E9E9D33E80BE6D41F3B325D5F48D78_il2cpp_TypeInfo_var);
		Func_2__ctor_mCFC3CF6D2965D5643F83C2F8C59FFFC859C1188F(L_0, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultIsPermissionGranted_mEF72865F99D3DA98F9EC1898C62D6B57E0FFE505_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mCFC3CF6D2965D5643F83C2F8C59FFFC859C1188F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_IsPermissionGrantedDelegate_0(L_0);
		TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * L_1 = (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 *)il2cpp_codegen_object_new(TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8_il2cpp_TypeInfo_var);
		TryGetColorCorrectionDelegate__ctor_m24DCA0F79CD8D0741CC55D5FC60FFA3F7E64CA6A(L_1, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultTryGetColorCorrection_m1998DE2BB46D10F87B59F1BE0FA463F898D2FDDB_RuntimeMethod_var), /*hidden argument*/NULL);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TryGetColorCorrectionDelegate_1(L_1);
		Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD * L_2 = (Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD *)il2cpp_codegen_object_new(Func_2_tD21C0AD1E10C99C0FC7A84082344E25F086499CD_il2cpp_TypeInfo_var);
		Func_2__ctor_m61E59A212E6D58F5C791E61ED141BB754E02338E(L_2, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultGetNativePtr_m5FB391B315530EFAB58CCF831FCBE3A6FA2BA81D_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m61E59A212E6D58F5C791E61ED141BB754E02338E_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegate_2(L_2);
		DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * L_3 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_DefaultCameraImageApi_4();
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_CameraImageApi_3(L_3);
		DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * L_4 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_DefaultCameraConfigApi_6();
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_CameraConfigApi_5(L_4);
		Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 * L_5 = (Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8 *)il2cpp_codegen_object_new(Func_3_t8142E55EC06EB0185AD099830F125CA5E187DDD8_il2cpp_TypeInfo_var);
		Func_3__ctor_m49911C9A2C73C5EF0BCCD24110DE90B1363183B6(L_5, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultTrySetFocusMode_mFCABA60BEA3964850986E49F3E6D799652633DD6_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m49911C9A2C73C5EF0BCCD24110DE90B1363183B6_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TrySetFocusModeDelegate_7(L_5);
		TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * L_6 = (TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 *)il2cpp_codegen_object_new(TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_il2cpp_TypeInfo_var);
		TryGetIntrinsicsDelegate__ctor_m5AE264FC124A1998ECECE523C304EEF4218030FB(L_6, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultTryGetIntrinsics_mA2F93BFBD0D95DAE57DF7F5D16D7E994A93BC2F6_RuntimeMethod_var), /*hidden argument*/NULL);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TryGetIntrinsicsDelegate_8(L_6);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::.cctor()
extern "C" IL2CPP_METHOD_ATTR void XRCameraExtensions__cctor_m631341108D89A0C9B7577D3D23327E641EADCFE2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions__cctor_m631341108D89A0C9B7577D3D23327E641EADCFE2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B * L_0 = (Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B *)il2cpp_codegen_object_new(Dictionary_2_t332B381ADD42E7894216EE28B27D48019ED7637B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m643E732B084C22E10F428E442C63CABC97739D1B(L_0, /*hidden argument*/Dictionary_2__ctor_m643E732B084C22E10F428E442C63CABC97739D1B_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_IsPermissionGrantedDelegates_9(L_0);
		Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0 * L_1 = (Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0 *)il2cpp_codegen_object_new(Dictionary_2_tDBB540258E01DD19F5B248555ADFB91E451BADF0_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m16707E7385FD31BD4A1C11B5414CCCEDE1B55324(L_1, /*hidden argument*/Dictionary_2__ctor_m16707E7385FD31BD4A1C11B5414CCCEDE1B55324_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TryGetColorCorrectionDelegates_10(L_1);
		Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730 * L_2 = (Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730 *)il2cpp_codegen_object_new(Dictionary_2_t707989CBAF49C089295D286B11265A8C639A7730_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2662F02533A78489FCB8E010E5FEBC06E3649B46(L_2, /*hidden argument*/Dictionary_2__ctor_m2662F02533A78489FCB8E010E5FEBC06E3649B46_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegates_11(L_2);
		Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F * L_3 = (Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F *)il2cpp_codegen_object_new(Dictionary_2_t6058911EEE43591076AB7625C4B87296D2B2E94F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6A85E7D2998C3CA167660D0E3A20B77125B1BF07(L_3, /*hidden argument*/Dictionary_2__ctor_m6A85E7D2998C3CA167660D0E3A20B77125B1BF07_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_CameraImageApis_12(L_3);
		Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF * L_4 = (Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF *)il2cpp_codegen_object_new(Dictionary_2_tECE8019B660D66E6B522360B0BF8F94254B823FF_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCC1CE03ACFDECEE395368B14E3B0FDAF6C93E24C(L_4, /*hidden argument*/Dictionary_2__ctor_mCC1CE03ACFDECEE395368B14E3B0FDAF6C93E24C_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_CameraConfigApis_13(L_4);
		Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF * L_5 = (Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF *)il2cpp_codegen_object_new(Dictionary_2_t03FC742469A2B251FF3680C63D1C74E74C66DECF_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8179D7EB766B8F6178D683EBFCDE2E14781FCD4D(L_5, /*hidden argument*/Dictionary_2__ctor_m8179D7EB766B8F6178D683EBFCDE2E14781FCD4D_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TrySetFocusModeDelegates_14(L_5);
		Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41 * L_6 = (Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41 *)il2cpp_codegen_object_new(Dictionary_2_t82DF621BE8A4AF1698D938F3A777446F51CC9E41_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m21D4F648E37C7E0EA81817958CCFAFDD3AA3CB5C(L_6, /*hidden argument*/Dictionary_2__ctor_m21D4F648E37C7E0EA81817958CCFAFDD3AA3CB5C_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TryGetIntrinsicsDelegates_15(L_6);
		DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * L_7 = (DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB *)il2cpp_codegen_object_new(DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB_il2cpp_TypeInfo_var);
		DefaultCameraImageApi__ctor_mDEDB043C62A55BE5D99154D5068E8BEF0BB481C8(L_7, /*hidden argument*/NULL);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_DefaultCameraImageApi_4(L_7);
		DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * L_8 = (DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 *)il2cpp_codegen_object_new(DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091_il2cpp_TypeInfo_var);
		DefaultCameraConfigApi__ctor_mCD3ADC17329DC4D3B9E2ACE4DDFE5086B29D2EA4(L_8, /*hidden argument*/NULL);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_DefaultCameraConfigApi_6(L_8);
		XRCameraExtensions_SetDefaultDelegates_mB63CACD38F7D4F76522D95050460244E5F7A782D(/*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TryGetColorCorrectionDelegate__ctor_m24DCA0F79CD8D0741CC55D5FC60FFA3F7E64CA6A (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate::Invoke(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.ColorU26)
extern "C" IL2CPP_METHOD_ATTR bool TryGetColorCorrectionDelegate_Invoke_m524672D96048A135D83822527B4E1597D89F7BB7 (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * __this, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystems0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___color1, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___color1, targetMethod);
				}
				else
				{
					// closed
					typedef bool (*FunctionPointerType) (void*, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cameraSubsystems0, ___color1, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker1< bool, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, ___cameraSubsystems0, ___color1);
							else
								result = GenericVirtFuncInvoker1< bool, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, ___cameraSubsystems0, ___color1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker1< bool, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___cameraSubsystems0, ___color1);
							else
								result = VirtFuncInvoker1< bool, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___cameraSubsystems0, ___color1);
						}
					}
				}
				else
				{
					typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___color1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___color1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, targetThis, ___cameraSubsystems0, ___color1);
							else
								result = GenericVirtFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, targetThis, ___cameraSubsystems0, ___color1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cameraSubsystems0, ___color1);
							else
								result = VirtFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cameraSubsystems0, ___color1);
						}
					}
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cameraSubsystems0, ___color1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___color1, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cameraSubsystems0, ___color1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker1< bool, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, ___cameraSubsystems0, ___color1);
						else
							result = GenericVirtFuncInvoker1< bool, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, ___cameraSubsystems0, ___color1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker1< bool, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___cameraSubsystems0, ___color1);
						else
							result = VirtFuncInvoker1< bool, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___cameraSubsystems0, ___color1);
					}
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___color1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___color1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, targetThis, ___cameraSubsystems0, ___color1);
						else
							result = GenericVirtFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, targetThis, ___cameraSubsystems0, ___color1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cameraSubsystems0, ___color1);
						else
							result = VirtFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cameraSubsystems0, ___color1);
					}
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cameraSubsystems0, ___color1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate::BeginInvoke(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.ColorU26,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TryGetColorCorrectionDelegate_BeginInvoke_m1BB5C2FFA2A8D2ED2DEF8F5BD8BBF33A9DA49200 (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * __this, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystems0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___color1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TryGetColorCorrectionDelegate_BeginInvoke_m1BB5C2FFA2A8D2ED2DEF8F5BD8BBF33A9DA49200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___cameraSubsystems0;
	__d_args[1] = Box(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2_il2cpp_TypeInfo_var, &*___color1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate::EndInvoke(UnityEngine.ColorU26,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool TryGetColorCorrectionDelegate_EndInvoke_mC01617A1CA5464C9AB76F9262BE05681AAC54CF5 (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___color0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___color0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetIntrinsicsDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TryGetIntrinsicsDelegate__ctor_m5AE264FC124A1998ECECE523C304EEF4218030FB (TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetIntrinsicsDelegate::Invoke(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraIntrinsicsU26)
extern "C" IL2CPP_METHOD_ATTR bool TryGetIntrinsicsDelegate_Invoke_mE1BFCD178A061C032156F29286C992EEC3D64027 (TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * __this, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystems0, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * ___cameraIntrinsics1, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___cameraIntrinsics1, targetMethod);
				}
				else
				{
					// closed
					typedef bool (*FunctionPointerType) (void*, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cameraSubsystems0, ___cameraIntrinsics1, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker1< bool, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(targetMethod, ___cameraSubsystems0, ___cameraIntrinsics1);
							else
								result = GenericVirtFuncInvoker1< bool, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(targetMethod, ___cameraSubsystems0, ___cameraIntrinsics1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker1< bool, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___cameraSubsystems0, ___cameraIntrinsics1);
							else
								result = VirtFuncInvoker1< bool, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___cameraSubsystems0, ___cameraIntrinsics1);
						}
					}
				}
				else
				{
					typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___cameraIntrinsics1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___cameraIntrinsics1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(targetMethod, targetThis, ___cameraSubsystems0, ___cameraIntrinsics1);
							else
								result = GenericVirtFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(targetMethod, targetThis, ___cameraSubsystems0, ___cameraIntrinsics1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cameraSubsystems0, ___cameraIntrinsics1);
							else
								result = VirtFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cameraSubsystems0, ___cameraIntrinsics1);
						}
					}
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cameraSubsystems0, ___cameraIntrinsics1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___cameraIntrinsics1, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cameraSubsystems0, ___cameraIntrinsics1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker1< bool, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(targetMethod, ___cameraSubsystems0, ___cameraIntrinsics1);
						else
							result = GenericVirtFuncInvoker1< bool, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(targetMethod, ___cameraSubsystems0, ___cameraIntrinsics1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker1< bool, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___cameraSubsystems0, ___cameraIntrinsics1);
						else
							result = VirtFuncInvoker1< bool, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___cameraSubsystems0, ___cameraIntrinsics1);
					}
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___cameraIntrinsics1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___cameraIntrinsics1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(targetMethod, targetThis, ___cameraSubsystems0, ___cameraIntrinsics1);
						else
							result = GenericVirtFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(targetMethod, targetThis, ___cameraSubsystems0, ___cameraIntrinsics1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cameraSubsystems0, ___cameraIntrinsics1);
						else
							result = VirtFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cameraSubsystems0, ___cameraIntrinsics1);
					}
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cameraSubsystems0, ___cameraIntrinsics1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetIntrinsicsDelegate::BeginInvoke(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraIntrinsicsU26,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TryGetIntrinsicsDelegate_BeginInvoke_mC39AC240F829BC8E2A71858509EA66D5F67AF16E (TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * __this, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystems0, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * ___cameraIntrinsics1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TryGetIntrinsicsDelegate_BeginInvoke_mC39AC240F829BC8E2A71858509EA66D5F67AF16E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___cameraSubsystems0;
	__d_args[1] = Box(CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447_il2cpp_TypeInfo_var, &*___cameraIntrinsics1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetIntrinsicsDelegate::EndInvoke(UnityEngine.XR.ARExtensions.CameraIntrinsicsU26,System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool TryGetIntrinsicsDelegate_EndInvoke_m85B733CD3A78A8280DE1992D31189871771C29CD (TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * __this, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * ___cameraIntrinsics0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___cameraIntrinsics0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::RegisterGetTrackingStateHandler(System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>)
extern "C" IL2CPP_METHOD_ATTR void XRPlaneExtensions_RegisterGetTrackingStateHandler_m2B39AFC8E80A49468B579280C2A9617D33A1D246 (String_t* ___subsystemId0, Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_RegisterGetTrackingStateHandler_m2B39AFC8E80A49468B579280C2A9617D33A1D246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467 * L_0 = ((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->get_s_GetTrackingStateDelegates_4();
		String_t* L_1 = ___subsystemId0;
		Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m267C95737EFF9A1CE9D7832B871642FF8F29705C(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m267C95737EFF9A1CE9D7832B871642FF8F29705C_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::RegisterGetNativePtrHandler(System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>)
extern "C" IL2CPP_METHOD_ATTR void XRPlaneExtensions_RegisterGetNativePtrHandler_m627EF1AC13B30A153571C56443A55BC4710DA83A (String_t* ___subsystemId0, Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_RegisterGetNativePtrHandler_m627EF1AC13B30A153571C56443A55BC4710DA83A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409 * L_0 = ((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->get_s_GetNativePtrDelegates_3();
		String_t* L_1 = ___subsystemId0;
		Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mE00C497C9CAE1ABDE120E68F538A4E8EE5CD0B1C(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_mE00C497C9CAE1ABDE120E68F538A4E8EE5CD0B1C_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::RegisterTrySetPlaneDetectionFlagsHandler(System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void XRPlaneExtensions_RegisterTrySetPlaneDetectionFlagsHandler_mAE80CA3A384AA6B70C0BDC62CEEB4EB637A3EB2F (String_t* ___subsystemId0, Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_RegisterTrySetPlaneDetectionFlagsHandler_mAE80CA3A384AA6B70C0BDC62CEEB4EB637A3EB2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6 * L_0 = ((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->get_s_TrySetPlaneDetectionFlagsDelegates_5();
		String_t* L_1 = ___subsystemId0;
		Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m1020BBA7F3A266949B1A8B79FA4BE6C905DFE47C(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m1020BBA7F3A266949B1A8B79FA4BE6C905DFE47C_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Experimental.XR.TrackingState UnityEngine.XR.ARExtensions.XRPlaneExtensions::GetTrackingState(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR int32_t XRPlaneExtensions_GetTrackingState_m13B5E36C047B76ED18FFDE896FCA71A709D972C8 (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___planeSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___planeId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_GetTrackingState_m13B5E36C047B76ED18FFDE896FCA71A709D972C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * L_0 = ___planeSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralB9BC357DEC96784E9811974A390666B2E82E6A6B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRPlaneExtensions_GetTrackingState_m13B5E36C047B76ED18FFDE896FCA71A709D972C8_RuntimeMethod_var);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 * L_2 = ((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->get_s_GetTrackingStateDelegate_1();
		XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * L_3 = ___planeSubsystem0;
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_4 = ___planeId1;
		NullCheck(L_2);
		int32_t L_5 = Func_3_Invoke_m3D40CC159878F5E92BDC7BE11DA8167F3D75612B(L_2, L_3, L_4, /*hidden argument*/Func_3_Invoke_m3D40CC159878F5E92BDC7BE11DA8167F3D75612B_RuntimeMethod_var);
		return L_5;
	}
}
// UnityEngine.Experimental.XR.TrackingState UnityEngine.XR.ARExtensions.XRPlaneExtensions::DefaultGetTrackingState(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR int32_t XRPlaneExtensions_DefaultGetTrackingState_m109B0DC9AEC93FE64BC1C1364818F4FE8BD7BFBC (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___planeSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___planeId1, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRPlaneExtensions::TrySetPlaneDetectionFlags(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags)
extern "C" IL2CPP_METHOD_ATTR bool XRPlaneExtensions_TrySetPlaneDetectionFlags_mBBD8133ADBD3FAE83271E8A27966DF624CA433F8 (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___planeSubsystem0, int32_t ___flags1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_TrySetPlaneDetectionFlags_mBBD8133ADBD3FAE83271E8A27966DF624CA433F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * L_0 = ___planeSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralB9BC357DEC96784E9811974A390666B2E82E6A6B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRPlaneExtensions_TrySetPlaneDetectionFlags_mBBD8133ADBD3FAE83271E8A27966DF624CA433F8_RuntimeMethod_var);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 * L_2 = ((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->get_s_TrySetPlaneDetectionFlagsDelegate_2();
		XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * L_3 = ___planeSubsystem0;
		int32_t L_4 = ___flags1;
		NullCheck(L_2);
		bool L_5 = Func_3_Invoke_m4F60ED5F0BABFB4F912C327D357E40C4BD46671B(L_2, L_3, L_4, /*hidden argument*/Func_3_Invoke_m4F60ED5F0BABFB4F912C327D357E40C4BD46671B_RuntimeMethod_var);
		return L_5;
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRPlaneExtensions::DefaultTrySetPlaneDetectionFlags(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags)
extern "C" IL2CPP_METHOD_ATTR bool XRPlaneExtensions_DefaultTrySetPlaneDetectionFlags_mA14030F81B354F0B71694A0569E688BF311255B4 (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___planeSubsystem0, int32_t ___flags1, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.IntPtr UnityEngine.XR.ARExtensions.XRPlaneExtensions::DefaultGetNativePtr(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR intptr_t XRPlaneExtensions_DefaultGetNativePtr_mA8650CEE33AC97CC68A82A44D55E1B0DA2AE2FE0 (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___referencePointSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_DefaultGetNativePtr_mA8650CEE33AC97CC68A82A44D55E1B0DA2AE2FE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return (intptr_t)(0);
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::ActivateExtensions(UnityEngine.Experimental.XR.XRPlaneSubsystem)
extern "C" IL2CPP_METHOD_ATTR void XRPlaneExtensions_ActivateExtensions_m84A2B077D880A3B5D955083E9D0BBDC03AF0DE6F (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___planeSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_ActivateExtensions_m84A2B077D880A3B5D955083E9D0BBDC03AF0DE6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * L_0 = ___planeSubsystem0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		XRPlaneExtensions_SetDefaultDelegates_m3D2EC86AE11A50A8E84A8587D02DD8FE921D8B0F(/*hidden argument*/NULL);
		return;
	}

IL_0009:
	{
		XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * L_1 = ___planeSubsystem0;
		NullCheck(L_1);
		XRPlaneSubsystemDescriptor_t0F6814B2CAD6778836A3A230A200600556C57D7F * L_2 = IntegratedSubsystem_1_get_SubsystemDescriptor_mD368E13F76695FE0CD6C9AF5A2DC8E0AE714413B(L_1, /*hidden argument*/IntegratedSubsystem_1_get_SubsystemDescriptor_mD368E13F76695FE0CD6C9AF5A2DC8E0AE714413B_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3 = IntegratedSubsystemDescriptor_get_id_m5D71CADC61C3D33BB8CB6233436AA36A096A6CC9(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409 * L_4 = ((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->get_s_GetNativePtrDelegates_3();
		String_t* L_5 = V_0;
		Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 * L_6 = (Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 *)il2cpp_codegen_object_new(Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4_il2cpp_TypeInfo_var);
		Func_3__ctor_m1C763DFF7E6A78C335AF3BD8F044F005DCADCD54(L_6, NULL, (intptr_t)((intptr_t)XRPlaneExtensions_DefaultGetNativePtr_mA8650CEE33AC97CC68A82A44D55E1B0DA2AE2FE0_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m1C763DFF7E6A78C335AF3BD8F044F005DCADCD54_RuntimeMethod_var);
		Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 * L_7 = RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_tDF578AEA147B81628BA611F816D57E306CA287C4_mCB53B9BF241912777A76353D6DBE4B5A724BB92C(L_4, L_5, L_6, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_tDF578AEA147B81628BA611F816D57E306CA287C4_mCB53B9BF241912777A76353D6DBE4B5A724BB92C_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegate_0(L_7);
		Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467 * L_8 = ((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->get_s_GetTrackingStateDelegates_4();
		String_t* L_9 = V_0;
		Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 * L_10 = (Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 *)il2cpp_codegen_object_new(Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9_il2cpp_TypeInfo_var);
		Func_3__ctor_m60A1D11DC046E5AAC6161238DFEF40D3F1468256(L_10, NULL, (intptr_t)((intptr_t)XRPlaneExtensions_DefaultGetTrackingState_m109B0DC9AEC93FE64BC1C1364818F4FE8BD7BFBC_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m60A1D11DC046E5AAC6161238DFEF40D3F1468256_RuntimeMethod_var);
		Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 * L_11 = RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9_m6F581DD037A07EE0F8CA734146BBDC86CA5566C6(L_8, L_9, L_10, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9_m6F581DD037A07EE0F8CA734146BBDC86CA5566C6_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_GetTrackingStateDelegate_1(L_11);
		Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6 * L_12 = ((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->get_s_TrySetPlaneDetectionFlagsDelegates_5();
		String_t* L_13 = V_0;
		Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 * L_14 = (Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 *)il2cpp_codegen_object_new(Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48_il2cpp_TypeInfo_var);
		Func_3__ctor_m51FEFFEF582D06C381792FE1E35C5C4CE1EF4184(L_14, NULL, (intptr_t)((intptr_t)XRPlaneExtensions_DefaultTrySetPlaneDetectionFlags_mA14030F81B354F0B71694A0569E688BF311255B4_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m51FEFFEF582D06C381792FE1E35C5C4CE1EF4184_RuntimeMethod_var);
		Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 * L_15 = RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48_m86C3C373C6A23EF1BFA66BF917DD9C153ACEAEEC(L_12, L_13, L_14, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48_m86C3C373C6A23EF1BFA66BF917DD9C153ACEAEEC_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_TrySetPlaneDetectionFlagsDelegate_2(L_15);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::SetDefaultDelegates()
extern "C" IL2CPP_METHOD_ATTR void XRPlaneExtensions_SetDefaultDelegates_m3D2EC86AE11A50A8E84A8587D02DD8FE921D8B0F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_SetDefaultDelegates_m3D2EC86AE11A50A8E84A8587D02DD8FE921D8B0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 * L_0 = (Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4 *)il2cpp_codegen_object_new(Func_3_tDF578AEA147B81628BA611F816D57E306CA287C4_il2cpp_TypeInfo_var);
		Func_3__ctor_m1C763DFF7E6A78C335AF3BD8F044F005DCADCD54(L_0, NULL, (intptr_t)((intptr_t)XRPlaneExtensions_DefaultGetNativePtr_mA8650CEE33AC97CC68A82A44D55E1B0DA2AE2FE0_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m1C763DFF7E6A78C335AF3BD8F044F005DCADCD54_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegate_0(L_0);
		Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 * L_1 = (Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9 *)il2cpp_codegen_object_new(Func_3_tADB96F4F6D4804C360DF07DE8146E2B4631B36B9_il2cpp_TypeInfo_var);
		Func_3__ctor_m60A1D11DC046E5AAC6161238DFEF40D3F1468256(L_1, NULL, (intptr_t)((intptr_t)XRPlaneExtensions_DefaultGetTrackingState_m109B0DC9AEC93FE64BC1C1364818F4FE8BD7BFBC_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m60A1D11DC046E5AAC6161238DFEF40D3F1468256_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_GetTrackingStateDelegate_1(L_1);
		Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 * L_2 = (Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48 *)il2cpp_codegen_object_new(Func_3_t1EF1CCE7ECB8A978928DF7EEDA4028100901CB48_il2cpp_TypeInfo_var);
		Func_3__ctor_m51FEFFEF582D06C381792FE1E35C5C4CE1EF4184(L_2, NULL, (intptr_t)((intptr_t)XRPlaneExtensions_DefaultTrySetPlaneDetectionFlags_mA14030F81B354F0B71694A0569E688BF311255B4_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m51FEFFEF582D06C381792FE1E35C5C4CE1EF4184_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_TrySetPlaneDetectionFlagsDelegate_2(L_2);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::.cctor()
extern "C" IL2CPP_METHOD_ATTR void XRPlaneExtensions__cctor_m76632D6FF5B1011C82234C09B4D500F97F610FA1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions__cctor_m76632D6FF5B1011C82234C09B4D500F97F610FA1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409 * L_0 = (Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409 *)il2cpp_codegen_object_new(Dictionary_2_t2706E85D313DEF390F17DB6874CDDCEEE2DCB409_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m35D6E74C094AF3C4EAD40E9735DEB971762F0BE1(L_0, /*hidden argument*/Dictionary_2__ctor_m35D6E74C094AF3C4EAD40E9735DEB971762F0BE1_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegates_3(L_0);
		Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467 * L_1 = (Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467 *)il2cpp_codegen_object_new(Dictionary_2_t4A9D89D64890F68FBC43DE2C012EE1C637F5C467_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2C97257910E6AD37DD7E2D0750D81DADE6E6E721(L_1, /*hidden argument*/Dictionary_2__ctor_m2C97257910E6AD37DD7E2D0750D81DADE6E6E721_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_GetTrackingStateDelegates_4(L_1);
		Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6 * L_2 = (Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6 *)il2cpp_codegen_object_new(Dictionary_2_tE04FB6FCD228835F326ECDF3C5A21B523796BEB6_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m48C21C4B8491DCB1C5982E9B60A0E1ADF16CF12F(L_2, /*hidden argument*/Dictionary_2__ctor_m48C21C4B8491DCB1C5982E9B60A0E1ADF16CF12F_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_TrySetPlaneDetectionFlagsDelegates_5(L_2);
		XRPlaneExtensions_SetDefaultDelegates_m3D2EC86AE11A50A8E84A8587D02DD8FE921D8B0F(/*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::RegisterAttachReferencePointHandler(System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions_AttachReferencePointDelegate)
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointExtensions_RegisterAttachReferencePointHandler_mB7C3DE2A5321A262600E068CD47871D81D9B6ECD (String_t* ___subsystemId0, AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions_RegisterAttachReferencePointHandler_mB7C3DE2A5321A262600E068CD47871D81D9B6ECD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var);
		Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554 * L_0 = ((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->get_s_AttachReferencePointDelegates_2();
		String_t* L_1 = ___subsystemId0;
		AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mF8E013984115986DB983BD7E1B7E75D9CAFCFF3E(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_mF8E013984115986DB983BD7E1B7E75D9CAFCFF3E_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::RegisterGetNativePtrHandler(System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>)
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointExtensions_RegisterGetNativePtrHandler_m98DA217E10EFAC941E71A826472E58A05450CA7E (String_t* ___subsystemId0, Func_3_tE51207E7A242422D97436D398CA19D150FF94581 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions_RegisterGetNativePtrHandler_m98DA217E10EFAC941E71A826472E58A05450CA7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var);
		Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D * L_0 = ((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->get_s_GetNativePtrDelegates_3();
		String_t* L_1 = ___subsystemId0;
		Func_3_tE51207E7A242422D97436D398CA19D150FF94581 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m89B8D7C9D79A6F5DC0964575BA22DEE998489C14(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m89B8D7C9D79A6F5DC0964575BA22DEE998489C14_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Experimental.XR.TrackableId UnityEngine.XR.ARExtensions.XRReferencePointExtensions::AttachReferencePoint(UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  XRReferencePointExtensions_AttachReferencePoint_m41702FD5DC29CDAACB3AC157FABDF68BC697D78C (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * ___referencePointSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions_AttachReferencePoint_m41702FD5DC29CDAACB3AC157FABDF68BC697D78C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * L_0 = ___referencePointSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral21B987F677241B66E28A5D11D61261FDE1890ED3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRReferencePointExtensions_AttachReferencePoint_m41702FD5DC29CDAACB3AC157FABDF68BC697D78C_RuntimeMethod_var);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var);
		AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * L_2 = ((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->get_s_AttachReferencePointDelegate_0();
		XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * L_3 = ___referencePointSubsystem0;
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_4 = ___trackableId1;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_5 = ___pose2;
		NullCheck(L_2);
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_6 = AttachReferencePointDelegate_Invoke_mA3421081DBADE594B7EE7581F8286322BEA5E563(L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Experimental.XR.TrackableId UnityEngine.XR.ARExtensions.XRReferencePointExtensions::DefaultAttachReferencePoint(UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  XRReferencePointExtensions_DefaultAttachReferencePoint_m2BFDC9B9A85200B115298704ADE25A2CCD99C51A (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * ___referencePointSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions_DefaultAttachReferencePoint_m2BFDC9B9A85200B115298704ADE25A2CCD99C51A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B_il2cpp_TypeInfo_var);
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_0 = TrackableId_get_InvalidId_m6A78BF219717CF4ACDF1D18C4E83CD187E8F9F27(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.IntPtr UnityEngine.XR.ARExtensions.XRReferencePointExtensions::DefaultGetNativePtr(UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId)
extern "C" IL2CPP_METHOD_ATTR intptr_t XRReferencePointExtensions_DefaultGetNativePtr_mE50EA94147FB15F7F21CE97AA140BC8885A4C46F (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * ___referencePointSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions_DefaultGetNativePtr_mE50EA94147FB15F7F21CE97AA140BC8885A4C46F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return (intptr_t)(0);
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::ActivateExtensions(UnityEngine.Experimental.XR.XRReferencePointSubsystem)
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointExtensions_ActivateExtensions_mA539EE90EE9922813356B830530633F843E99C17 (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * ___referencePointSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions_ActivateExtensions_mA539EE90EE9922813356B830530633F843E99C17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * L_0 = ___referencePointSubsystem0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var);
		XRReferencePointExtensions_SetDefaultDelegates_m096C9D166DEAA60FF2F81C69042689E001699C67(/*hidden argument*/NULL);
		return;
	}

IL_0009:
	{
		XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * L_1 = ___referencePointSubsystem0;
		NullCheck(L_1);
		XRReferencePointSubsystemDescriptor_t0228E77788DA1EAB18104D6AB3DBAF5AF5CFA0D3 * L_2 = IntegratedSubsystem_1_get_SubsystemDescriptor_mF62CCD4746521AF905E114C9518FE70318CB8B8C(L_1, /*hidden argument*/IntegratedSubsystem_1_get_SubsystemDescriptor_mF62CCD4746521AF905E114C9518FE70318CB8B8C_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3 = IntegratedSubsystemDescriptor_get_id_m5D71CADC61C3D33BB8CB6233436AA36A096A6CC9(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var);
		Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554 * L_4 = ((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->get_s_AttachReferencePointDelegates_2();
		String_t* L_5 = V_0;
		AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * L_6 = (AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF *)il2cpp_codegen_object_new(AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_il2cpp_TypeInfo_var);
		AttachReferencePointDelegate__ctor_m217CAFB3BEA1BADC08A86B0E980CC34400B8A86C(L_6, NULL, (intptr_t)((intptr_t)XRReferencePointExtensions_DefaultAttachReferencePoint_m2BFDC9B9A85200B115298704ADE25A2CCD99C51A_RuntimeMethod_var), /*hidden argument*/NULL);
		AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * L_7 = RegistrationHelper_GetValueOrDefault_TisString_t_TisAttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_mE6C1581CC482A6DDE3B56CF374D299C1A20EEE0E(L_4, L_5, L_6, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisAttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_mE6C1581CC482A6DDE3B56CF374D299C1A20EEE0E_RuntimeMethod_var);
		((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->set_s_AttachReferencePointDelegate_0(L_7);
		Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D * L_8 = ((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->get_s_GetNativePtrDelegates_3();
		String_t* L_9 = V_0;
		Func_3_tE51207E7A242422D97436D398CA19D150FF94581 * L_10 = (Func_3_tE51207E7A242422D97436D398CA19D150FF94581 *)il2cpp_codegen_object_new(Func_3_tE51207E7A242422D97436D398CA19D150FF94581_il2cpp_TypeInfo_var);
		Func_3__ctor_mC2E506B45E73329F595198888231F1EA2CF89E52(L_10, NULL, (intptr_t)((intptr_t)XRReferencePointExtensions_DefaultGetNativePtr_mE50EA94147FB15F7F21CE97AA140BC8885A4C46F_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_mC2E506B45E73329F595198888231F1EA2CF89E52_RuntimeMethod_var);
		Func_3_tE51207E7A242422D97436D398CA19D150FF94581 * L_11 = RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_tE51207E7A242422D97436D398CA19D150FF94581_mF767B3BB4324668A19D8E1B7FB615606D06BAFE6(L_8, L_9, L_10, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_tE51207E7A242422D97436D398CA19D150FF94581_mF767B3BB4324668A19D8E1B7FB615606D06BAFE6_RuntimeMethod_var);
		((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegate_1(L_11);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::SetDefaultDelegates()
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointExtensions_SetDefaultDelegates_m096C9D166DEAA60FF2F81C69042689E001699C67 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions_SetDefaultDelegates_m096C9D166DEAA60FF2F81C69042689E001699C67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * L_0 = (AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF *)il2cpp_codegen_object_new(AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_il2cpp_TypeInfo_var);
		AttachReferencePointDelegate__ctor_m217CAFB3BEA1BADC08A86B0E980CC34400B8A86C(L_0, NULL, (intptr_t)((intptr_t)XRReferencePointExtensions_DefaultAttachReferencePoint_m2BFDC9B9A85200B115298704ADE25A2CCD99C51A_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var);
		((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->set_s_AttachReferencePointDelegate_0(L_0);
		Func_3_tE51207E7A242422D97436D398CA19D150FF94581 * L_1 = (Func_3_tE51207E7A242422D97436D398CA19D150FF94581 *)il2cpp_codegen_object_new(Func_3_tE51207E7A242422D97436D398CA19D150FF94581_il2cpp_TypeInfo_var);
		Func_3__ctor_mC2E506B45E73329F595198888231F1EA2CF89E52(L_1, NULL, (intptr_t)((intptr_t)XRReferencePointExtensions_DefaultGetNativePtr_mE50EA94147FB15F7F21CE97AA140BC8885A4C46F_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_mC2E506B45E73329F595198888231F1EA2CF89E52_RuntimeMethod_var);
		((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegate_1(L_1);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::.cctor()
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointExtensions__cctor_mA5668AAC068C68B90BD61052DAD4E1FA737FD0FE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions__cctor_mA5668AAC068C68B90BD61052DAD4E1FA737FD0FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554 * L_0 = (Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554 *)il2cpp_codegen_object_new(Dictionary_2_tF65291F5C17BE4538B0A42E1C7369F27621D2554_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mFFD4C5AC6A89C26348842C16AEE9930EDA9A6D91(L_0, /*hidden argument*/Dictionary_2__ctor_mFFD4C5AC6A89C26348842C16AEE9930EDA9A6D91_RuntimeMethod_var);
		((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->set_s_AttachReferencePointDelegates_2(L_0);
		Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D * L_1 = (Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D *)il2cpp_codegen_object_new(Dictionary_2_tD67186A32F638C55B3D7E5D00AA532859F8B871D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD2B5C280676BB7344912E08FB2D614016806F1F2(L_1, /*hidden argument*/Dictionary_2__ctor_mD2B5C280676BB7344912E08FB2D614016806F1F2_RuntimeMethod_var);
		((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegates_3(L_1);
		XRReferencePointExtensions_SetDefaultDelegates_m096C9D166DEAA60FF2F81C69042689E001699C67(/*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions_AttachReferencePointDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AttachReferencePointDelegate__ctor_m217CAFB3BEA1BADC08A86B0E980CC34400B8A86C (AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Experimental.XR.TrackableId UnityEngine.XR.ARExtensions.XRReferencePointExtensions_AttachReferencePointDelegate::Invoke(UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  AttachReferencePointDelegate_Invoke_mA3421081DBADE594B7EE7581F8286322BEA5E563 (AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * __this, XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * ___referencePointSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose2, const RuntimeMethod* method)
{
	TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  result;
	memset(&result, 0, sizeof(result));
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  (*FunctionPointerType) (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
				}
				else
				{
					// closed
					typedef TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  (*FunctionPointerType) (void*, XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
				}
			}
			else if (___parameterCount != 3)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker2< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(targetMethod, ___referencePointSubsystem0, ___trackableId1, ___pose2);
							else
								result = GenericVirtFuncInvoker2< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(targetMethod, ___referencePointSubsystem0, ___trackableId1, ___pose2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker2< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___referencePointSubsystem0, ___trackableId1, ___pose2);
							else
								result = VirtFuncInvoker2< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___referencePointSubsystem0, ___trackableId1, ___pose2);
						}
					}
				}
				else
				{
					typedef TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  (*FunctionPointerType) (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  (*FunctionPointerType) (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker3< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(targetMethod, targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2);
							else
								result = GenericVirtFuncInvoker3< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(targetMethod, targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker3< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2);
							else
								result = VirtFuncInvoker3< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2);
						}
					}
				}
				else
				{
					typedef TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  (*FunctionPointerType) (void*, XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  (*FunctionPointerType) (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
			}
			else
			{
				// closed
				typedef TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  (*FunctionPointerType) (void*, XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker2< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(targetMethod, ___referencePointSubsystem0, ___trackableId1, ___pose2);
						else
							result = GenericVirtFuncInvoker2< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(targetMethod, ___referencePointSubsystem0, ___trackableId1, ___pose2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker2< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___referencePointSubsystem0, ___trackableId1, ___pose2);
						else
							result = VirtFuncInvoker2< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___referencePointSubsystem0, ___trackableId1, ___pose2);
					}
				}
			}
			else
			{
				typedef TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  (*FunctionPointerType) (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  (*FunctionPointerType) (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker3< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(targetMethod, targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2);
						else
							result = GenericVirtFuncInvoker3< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(targetMethod, targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker3< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2);
						else
							result = VirtFuncInvoker3< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2);
					}
				}
			}
			else
			{
				typedef TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  (*FunctionPointerType) (void*, XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.XR.ARExtensions.XRReferencePointExtensions_AttachReferencePointDelegate::BeginInvoke(UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Pose,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AttachReferencePointDelegate_BeginInvoke_m9B4682C5E3C88E0C373307E185261804619B5FA3 (AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * __this, XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * ___referencePointSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttachReferencePointDelegate_BeginInvoke_m9B4682C5E3C88E0C373307E185261804619B5FA3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___referencePointSubsystem0;
	__d_args[1] = Box(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B_il2cpp_TypeInfo_var, &___trackableId1);
	__d_args[2] = Box(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var, &___pose2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// UnityEngine.Experimental.XR.TrackableId UnityEngine.XR.ARExtensions.XRReferencePointExtensions_AttachReferencePointDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  AttachReferencePointDelegate_EndInvoke_m440DF197CE9D964AA64553D7AEF01581F654B806 (AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B *)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions::RegisterGetNativePtrHandler(System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>)
extern "C" IL2CPP_METHOD_ATTR void XRSessionExtensions_RegisterGetNativePtrHandler_m89D4DE950CF44C520D6FEE56C5411DDF4FFB58B6 (String_t* ___subsystemId0, Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_RegisterGetNativePtrHandler_m89D4DE950CF44C520D6FEE56C5411DDF4FFB58B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var);
		Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7 * L_0 = ((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->get_s_GetNativePtrDelegates_5();
		String_t* L_1 = ___subsystemId0;
		Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m3810570CC05C47FBA418C223B89A285988EC0733(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m3810570CC05C47FBA418C223B89A285988EC0733_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions::RegisterGetAvailabilityAsyncHandler(System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions_AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>)
extern "C" IL2CPP_METHOD_ATTR void XRSessionExtensions_RegisterGetAvailabilityAsyncHandler_mC166F78DA7D5249E8CF131F6BF6290A50475332E (String_t* ___subsystemId0, AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_RegisterGetAvailabilityAsyncHandler_mC166F78DA7D5249E8CF131F6BF6290A50475332E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var);
		Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344 * L_0 = ((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->get_s_GetAvailabilityAsyncDelegates_4();
		String_t* L_1 = ___subsystemId0;
		AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m90C6195E1685E0FECE925DB1FC5B561053930193(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m90C6195E1685E0FECE925DB1FC5B561053930193_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionAvailability> UnityEngine.XR.ARExtensions.XRSessionExtensions::GetAvailabilityAsync(UnityEngine.Experimental.XR.XRSessionSubsystem)
extern "C" IL2CPP_METHOD_ATTR Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * XRSessionExtensions_GetAvailabilityAsync_mBDD84001B8806A80783567D7CD410405BB78D963 (XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_GetAvailabilityAsync_mBDD84001B8806A80783567D7CD410405BB78D963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * L_0 = ___sessionSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral803CB9B37A5D16493B12A6980F00E6EFC5F33114, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRSessionExtensions_GetAvailabilityAsync_mBDD84001B8806A80783567D7CD410405BB78D963_RuntimeMethod_var);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var);
		AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * L_2 = ((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->get_s_GetAvailabilityAsyncDelegate_1();
		XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * L_3 = ___sessionSubsystem0;
		NullCheck(L_2);
		Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * L_4 = AsyncDelegate_1_Invoke_m106CF5901441272D1BAAA67E469EDCD5A05201EB(L_2, L_3, /*hidden argument*/AsyncDelegate_1_Invoke_m106CF5901441272D1BAAA67E469EDCD5A05201EB_RuntimeMethod_var);
		return L_4;
	}
}
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionAvailability> UnityEngine.XR.ARExtensions.XRSessionExtensions::DefaultGetAvailabilityAsync(UnityEngine.Experimental.XR.XRSessionSubsystem)
extern "C" IL2CPP_METHOD_ATTR Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * XRSessionExtensions_DefaultGetAvailabilityAsync_mE0BE46A1C4A79123C9D1565734DF84C5228F347F (XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_DefaultGetAvailabilityAsync_mE0BE46A1C4A79123C9D1565734DF84C5228F347F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * L_0 = Promise_1_CreateResolvedPromise_m548F7D4E240E44FFBBB8D3942AF9ABD34C6DEE4A(6, /*hidden argument*/Promise_1_CreateResolvedPromise_m548F7D4E240E44FFBBB8D3942AF9ABD34C6DEE4A_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus> UnityEngine.XR.ARExtensions.XRSessionExtensions::InstallAsync(UnityEngine.Experimental.XR.XRSessionSubsystem)
extern "C" IL2CPP_METHOD_ATTR Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15 * XRSessionExtensions_InstallAsync_m837E3721911B365903CB031F4D5DAF4B52132B84 (XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_InstallAsync_m837E3721911B365903CB031F4D5DAF4B52132B84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * L_0 = ___sessionSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral803CB9B37A5D16493B12A6980F00E6EFC5F33114, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRSessionExtensions_InstallAsync_m837E3721911B365903CB031F4D5DAF4B52132B84_RuntimeMethod_var);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var);
		AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * L_2 = ((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->get_s_InstallAsyncDelegate_0();
		XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * L_3 = ___sessionSubsystem0;
		NullCheck(L_2);
		Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15 * L_4 = AsyncDelegate_1_Invoke_mE4C5BF27A0BA0E736BF0B6883E1FCE03CC2D94E4(L_2, L_3, /*hidden argument*/AsyncDelegate_1_Invoke_mE4C5BF27A0BA0E736BF0B6883E1FCE03CC2D94E4_RuntimeMethod_var);
		return L_4;
	}
}
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus> UnityEngine.XR.ARExtensions.XRSessionExtensions::DefaultInstallAsync(UnityEngine.Experimental.XR.XRSessionSubsystem)
extern "C" IL2CPP_METHOD_ATTR Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15 * XRSessionExtensions_DefaultInstallAsync_m3BADE4DD676472E851C6088B7DBFB3FD23EA51F8 (XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_DefaultInstallAsync_m3BADE4DD676472E851C6088B7DBFB3FD23EA51F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15 * L_0 = Promise_1_CreateResolvedPromise_m7EC83AB3701AC7742546873D51CF5D0C5E39569C(4, /*hidden argument*/Promise_1_CreateResolvedPromise_m7EC83AB3701AC7742546873D51CF5D0C5E39569C_RuntimeMethod_var);
		return L_0;
	}
}
// System.IntPtr UnityEngine.XR.ARExtensions.XRSessionExtensions::DefaultGetNativePtr(UnityEngine.Experimental.XR.XRSessionSubsystem)
extern "C" IL2CPP_METHOD_ATTR intptr_t XRSessionExtensions_DefaultGetNativePtr_m7E8A6F7963C4D2F7188F3CA080A45722047CD369 (XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_DefaultGetNativePtr_m7E8A6F7963C4D2F7188F3CA080A45722047CD369_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return (intptr_t)(0);
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions::ActivateExtensions(UnityEngine.Experimental.XR.XRSessionSubsystem)
extern "C" IL2CPP_METHOD_ATTR void XRSessionExtensions_ActivateExtensions_m42E643E5C243BDD5E1D303C5FE849FA766C4C919 (XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_ActivateExtensions_m42E643E5C243BDD5E1D303C5FE849FA766C4C919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * L_0 = ___sessionSubsystem0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var);
		XRSessionExtensions_SetDefaultDelegates_m74F7CC39ACF2F34EC27D4EC79C7CC45D85A99542(/*hidden argument*/NULL);
		return;
	}

IL_0009:
	{
		XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * L_1 = ___sessionSubsystem0;
		NullCheck(L_1);
		XRSessionSubsystemDescriptor_tF69268DD404379B461569E4268BEC52FAFC9F3B9 * L_2 = IntegratedSubsystem_1_get_SubsystemDescriptor_mAE9913A45DC61E5CA0A88DCEF4463FA10D858638(L_1, /*hidden argument*/IntegratedSubsystem_1_get_SubsystemDescriptor_mAE9913A45DC61E5CA0A88DCEF4463FA10D858638_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3 = IntegratedSubsystemDescriptor_get_id_m5D71CADC61C3D33BB8CB6233436AA36A096A6CC9(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var);
		Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F * L_4 = ((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->get_s_InstallAsyncDelegates_3();
		String_t* L_5 = V_0;
		AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * L_6 = (AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 *)il2cpp_codegen_object_new(AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3_il2cpp_TypeInfo_var);
		AsyncDelegate_1__ctor_m178AD63E291123B72AEC9F7C35FA027D08840DC0(L_6, NULL, (intptr_t)((intptr_t)XRSessionExtensions_DefaultInstallAsync_m3BADE4DD676472E851C6088B7DBFB3FD23EA51F8_RuntimeMethod_var), /*hidden argument*/AsyncDelegate_1__ctor_m178AD63E291123B72AEC9F7C35FA027D08840DC0_RuntimeMethod_var);
		AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * L_7 = RegistrationHelper_GetValueOrDefault_TisString_t_TisAsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3_m971FCCDF1603B10293982EB3DE754F833E20E460(L_4, L_5, L_6, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisAsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3_m971FCCDF1603B10293982EB3DE754F833E20E460_RuntimeMethod_var);
		((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->set_s_InstallAsyncDelegate_0(L_7);
		Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344 * L_8 = ((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->get_s_GetAvailabilityAsyncDelegates_4();
		String_t* L_9 = V_0;
		AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * L_10 = (AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 *)il2cpp_codegen_object_new(AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_il2cpp_TypeInfo_var);
		AsyncDelegate_1__ctor_m3FB654DEB58EFDC175AF92D33A92B4C3860D8476(L_10, NULL, (intptr_t)((intptr_t)XRSessionExtensions_DefaultGetAvailabilityAsync_mE0BE46A1C4A79123C9D1565734DF84C5228F347F_RuntimeMethod_var), /*hidden argument*/AsyncDelegate_1__ctor_m3FB654DEB58EFDC175AF92D33A92B4C3860D8476_RuntimeMethod_var);
		AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * L_11 = RegistrationHelper_GetValueOrDefault_TisString_t_TisAsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_m6B2EADA8715B927389A7DC2E317017D443211AB6(L_8, L_9, L_10, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisAsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_m6B2EADA8715B927389A7DC2E317017D443211AB6_RuntimeMethod_var);
		((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->set_s_GetAvailabilityAsyncDelegate_1(L_11);
		Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7 * L_12 = ((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->get_s_GetNativePtrDelegates_5();
		String_t* L_13 = V_0;
		Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 * L_14 = (Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 *)il2cpp_codegen_object_new(Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7_il2cpp_TypeInfo_var);
		Func_2__ctor_mB1A7B68BFD8D0626F06D618BC846059C86F09F8D(L_14, NULL, (intptr_t)((intptr_t)XRSessionExtensions_DefaultGetNativePtr_m7E8A6F7963C4D2F7188F3CA080A45722047CD369_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mB1A7B68BFD8D0626F06D618BC846059C86F09F8D_RuntimeMethod_var);
		Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 * L_15 = RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7_m12524AE49DF5A096121774F7DD9CE14EB9D85666(L_12, L_13, L_14, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7_m12524AE49DF5A096121774F7DD9CE14EB9D85666_RuntimeMethod_var);
		((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegate_2(L_15);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions::SetDefaultDelegates()
extern "C" IL2CPP_METHOD_ATTR void XRSessionExtensions_SetDefaultDelegates_m74F7CC39ACF2F34EC27D4EC79C7CC45D85A99542 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_SetDefaultDelegates_m74F7CC39ACF2F34EC27D4EC79C7CC45D85A99542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * L_0 = (AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 *)il2cpp_codegen_object_new(AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3_il2cpp_TypeInfo_var);
		AsyncDelegate_1__ctor_m178AD63E291123B72AEC9F7C35FA027D08840DC0(L_0, NULL, (intptr_t)((intptr_t)XRSessionExtensions_DefaultInstallAsync_m3BADE4DD676472E851C6088B7DBFB3FD23EA51F8_RuntimeMethod_var), /*hidden argument*/AsyncDelegate_1__ctor_m178AD63E291123B72AEC9F7C35FA027D08840DC0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var);
		((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->set_s_InstallAsyncDelegate_0(L_0);
		AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * L_1 = (AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 *)il2cpp_codegen_object_new(AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_il2cpp_TypeInfo_var);
		AsyncDelegate_1__ctor_m3FB654DEB58EFDC175AF92D33A92B4C3860D8476(L_1, NULL, (intptr_t)((intptr_t)XRSessionExtensions_DefaultGetAvailabilityAsync_mE0BE46A1C4A79123C9D1565734DF84C5228F347F_RuntimeMethod_var), /*hidden argument*/AsyncDelegate_1__ctor_m3FB654DEB58EFDC175AF92D33A92B4C3860D8476_RuntimeMethod_var);
		((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->set_s_GetAvailabilityAsyncDelegate_1(L_1);
		Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 * L_2 = (Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7 *)il2cpp_codegen_object_new(Func_2_t9B4A2794A15F05B6A5AA4A59CE29B1D3CA8081A7_il2cpp_TypeInfo_var);
		Func_2__ctor_mB1A7B68BFD8D0626F06D618BC846059C86F09F8D(L_2, NULL, (intptr_t)((intptr_t)XRSessionExtensions_DefaultGetNativePtr_m7E8A6F7963C4D2F7188F3CA080A45722047CD369_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mB1A7B68BFD8D0626F06D618BC846059C86F09F8D_RuntimeMethod_var);
		((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegate_2(L_2);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions::.cctor()
extern "C" IL2CPP_METHOD_ATTR void XRSessionExtensions__cctor_mC73D1D140765ACA71BDCDA7472CFCE7DC799C9BA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions__cctor_mC73D1D140765ACA71BDCDA7472CFCE7DC799C9BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F * L_0 = (Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F *)il2cpp_codegen_object_new(Dictionary_2_t5440C9C92669AAC2A8D32C4BC41523E53DE6A49F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEB537A1B57E4CF73E858D74630BD0E13B4E5BE0B(L_0, /*hidden argument*/Dictionary_2__ctor_mEB537A1B57E4CF73E858D74630BD0E13B4E5BE0B_RuntimeMethod_var);
		((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->set_s_InstallAsyncDelegates_3(L_0);
		Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344 * L_1 = (Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344 *)il2cpp_codegen_object_new(Dictionary_2_tCA4D6C75E791133AABE5613D1D1A6A554382A344_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEE5CDB5DF2AF290A068637D1D32112872F183809(L_1, /*hidden argument*/Dictionary_2__ctor_mEE5CDB5DF2AF290A068637D1D32112872F183809_RuntimeMethod_var);
		((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->set_s_GetAvailabilityAsyncDelegates_4(L_1);
		Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7 * L_2 = (Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7 *)il2cpp_codegen_object_new(Dictionary_2_tAD560473AB7821B978587ED1305391B72E86B1B7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m50FC80961BFFAF18A53884A6A9E034D3248EC5FB(L_2, /*hidden argument*/Dictionary_2__ctor_m50FC80961BFFAF18A53884A6A9E034D3248EC5FB_RuntimeMethod_var);
		((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegates_5(L_2);
		XRSessionExtensions_SetDefaultDelegates_m74F7CC39ACF2F34EC27D4EC79C7CC45D85A99542(/*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
