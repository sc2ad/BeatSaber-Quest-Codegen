// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableHandle
  struct PlayableHandle;
  // Forward declaring type: INotification
  class INotification;
  // Forward declaring type: INotificationReceiver
  class INotificationReceiver;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableOutputHandle
  struct PlayableOutputHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableOutputHandle, "UnityEngine.Playables", "PlayableOutputHandle");
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Playables.PlayableOutputHandle
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 1087088
  // [NativeHeaderAttribute] Offset: 1087088
  // [NativeHeaderAttribute] Offset: 1087088
  // [NativeHeaderAttribute] Offset: 1087088
  struct PlayableOutputHandle/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Playables::PlayableOutputHandle>*/ {
    public:
    public:
    // System.IntPtr m_Handle
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr m_Handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // System.UInt32 m_Version
    // Size: 0x4
    // Offset: 0x8
    uint m_Version;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: PlayableOutputHandle
    constexpr PlayableOutputHandle(::System::IntPtr m_Handle_ = {}, uint m_Version_ = {}) noexcept : m_Handle{m_Handle_}, m_Version{m_Version_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Playables::PlayableOutputHandle>
    operator ::System::IEquatable_1<::UnityEngine::Playables::PlayableOutputHandle>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Playables::PlayableOutputHandle>*>(this);
    }
    // Creating interface conversion operator: i_PlayableOutputHandle
    inline ::System::IEquatable_1<::UnityEngine::Playables::PlayableOutputHandle>* i_PlayableOutputHandle() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::UnityEngine::Playables::PlayableOutputHandle>*>(this);
    }
    // Get static field: static private readonly UnityEngine.Playables.PlayableOutputHandle m_Null
    static ::UnityEngine::Playables::PlayableOutputHandle _get_m_Null();
    // Set static field: static private readonly UnityEngine.Playables.PlayableOutputHandle m_Null
    static void _set_m_Null(::UnityEngine::Playables::PlayableOutputHandle value);
    // Get instance field reference: System.IntPtr m_Handle
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Handle();
    // Get instance field reference: System.UInt32 m_Version
    [[deprecated("Use field access instead!")]] uint& dyn_m_Version();
    // static public UnityEngine.Playables.PlayableOutputHandle get_Null()
    // Offset: 0x2154BE8
    static ::UnityEngine::Playables::PlayableOutputHandle get_Null();
    // static private System.Void .cctor()
    // Offset: 0x21556BC
    static void _cctor();
    // System.Boolean IsPlayableOutputOfType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    bool IsPlayableOutputOfType() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Playables::PlayableOutputHandle::IsPlayableOutputOfType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "IsPlayableOutputOfType", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method);
    }
    // public System.Boolean Equals(UnityEngine.Playables.PlayableOutputHandle other)
    // Offset: 0x2154D4C
    bool Equals(::UnityEngine::Playables::PlayableOutputHandle other);
    // static System.Boolean CompareVersion(UnityEngine.Playables.PlayableOutputHandle lhs, UnityEngine.Playables.PlayableOutputHandle rhs)
    // Offset: 0x2154C88
    static bool CompareVersion(::UnityEngine::Playables::PlayableOutputHandle lhs, ::UnityEngine::Playables::PlayableOutputHandle rhs);
    // System.Boolean IsValid()
    // Offset: 0x2154DDC
    bool IsValid();
    // System.Type GetPlayableOutputType()
    // Offset: 0x2154EA0
    ::System::Type* GetPlayableOutputType();
    // System.Void SetReferenceObject(UnityEngine.Object target)
    // Offset: 0x2154F64
    void SetReferenceObject(::UnityEngine::Object* target);
    // System.Void SetUserData(UnityEngine.Object target)
    // Offset: 0x2155048
    void SetUserData(::UnityEngine::Object* target);
    // UnityEngine.Playables.PlayableHandle GetSourcePlayable()
    // Offset: 0x215512C
    ::UnityEngine::Playables::PlayableHandle GetSourcePlayable();
    // System.Void SetSourcePlayable(UnityEngine.Playables.PlayableHandle target, System.Int32 port)
    // Offset: 0x2155218
    void SetSourcePlayable(::UnityEngine::Playables::PlayableHandle target, int port);
    // System.Int32 GetSourceOutputPort()
    // Offset: 0x2155318
    int GetSourceOutputPort();
    // System.Void SetWeight(System.Single weight)
    // Offset: 0x21553DC
    void SetWeight(float weight);
    // System.Void PushNotification(UnityEngine.Playables.PlayableHandle origin, UnityEngine.Playables.INotification notification, System.Object context)
    // Offset: 0x21554C0
    void PushNotification(::UnityEngine::Playables::PlayableHandle origin, ::UnityEngine::Playables::INotification* notification, ::Il2CppObject* context);
    // System.Void AddNotificationReceiver(UnityEngine.Playables.INotificationReceiver receiver)
    // Offset: 0x21555D8
    void AddNotificationReceiver(::UnityEngine::Playables::INotificationReceiver* receiver);
    // static private System.Boolean IsValid_Injected(ref UnityEngine.Playables.PlayableOutputHandle _unity_self)
    // Offset: 0x2154E60
    static bool IsValid_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self);
    // static private System.Type GetPlayableOutputType_Injected(ref UnityEngine.Playables.PlayableOutputHandle _unity_self)
    // Offset: 0x2154F24
    static ::System::Type* GetPlayableOutputType_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self);
    // static private System.Void SetReferenceObject_Injected(ref UnityEngine.Playables.PlayableOutputHandle _unity_self, UnityEngine.Object target)
    // Offset: 0x2154FF8
    static void SetReferenceObject_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self, ::UnityEngine::Object* target);
    // static private System.Void SetUserData_Injected(ref UnityEngine.Playables.PlayableOutputHandle _unity_self, UnityEngine.Object target)
    // Offset: 0x21550DC
    static void SetUserData_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self, ::UnityEngine::Object* target);
    // static private System.Void GetSourcePlayable_Injected(ref UnityEngine.Playables.PlayableOutputHandle _unity_self, out UnityEngine.Playables.PlayableHandle ret)
    // Offset: 0x21551C8
    static void GetSourcePlayable_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self, ByRef<::UnityEngine::Playables::PlayableHandle> ret);
    // static private System.Void SetSourcePlayable_Injected(ref UnityEngine.Playables.PlayableOutputHandle _unity_self, ref UnityEngine.Playables.PlayableHandle target, System.Int32 port)
    // Offset: 0x21552C0
    static void SetSourcePlayable_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self, ByRef<::UnityEngine::Playables::PlayableHandle> target, int port);
    // static private System.Int32 GetSourceOutputPort_Injected(ref UnityEngine.Playables.PlayableOutputHandle _unity_self)
    // Offset: 0x215539C
    static int GetSourceOutputPort_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self);
    // static private System.Void SetWeight_Injected(ref UnityEngine.Playables.PlayableOutputHandle _unity_self, System.Single weight)
    // Offset: 0x2155470
    static void SetWeight_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self, float weight);
    // static private System.Void PushNotification_Injected(ref UnityEngine.Playables.PlayableOutputHandle _unity_self, ref UnityEngine.Playables.PlayableHandle origin, UnityEngine.Playables.INotification notification, System.Object context)
    // Offset: 0x2155570
    static void PushNotification_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self, ByRef<::UnityEngine::Playables::PlayableHandle> origin, ::UnityEngine::Playables::INotification* notification, ::Il2CppObject* context);
    // static private System.Void AddNotificationReceiver_Injected(ref UnityEngine.Playables.PlayableOutputHandle _unity_self, UnityEngine.Playables.INotificationReceiver receiver)
    // Offset: 0x215566C
    static void AddNotificationReceiver_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle> _unity_self, ::UnityEngine::Playables::INotificationReceiver* receiver);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2154C50
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object p)
    // Offset: 0x2154CC0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object p)
    bool Equals(::Il2CppObject* p);
  }; // UnityEngine.Playables.PlayableOutputHandle
  #pragma pack(pop)
  static check_size<sizeof(PlayableOutputHandle), 8 + sizeof(uint)> __UnityEngine_Playables_PlayableOutputHandleSizeCheck;
  static_assert(sizeof(PlayableOutputHandle) == 0xC);
  // static public System.Boolean op_Equality(UnityEngine.Playables.PlayableOutputHandle lhs, UnityEngine.Playables.PlayableOutputHandle rhs)
  // Offset: 0x2154ADC
  bool operator ==(const ::UnityEngine::Playables::PlayableOutputHandle& lhs, const ::UnityEngine::Playables::PlayableOutputHandle& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::get_Null
// Il2CppName: get_Null
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutputHandle (*)()>(&UnityEngine::Playables::PlayableOutputHandle::get_Null)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "get_Null", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Playables::PlayableOutputHandle::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::IsPlayableOutputOfType
// Il2CppName: IsPlayableOutputOfType
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::PlayableOutputHandle::*)(::UnityEngine::Playables::PlayableOutputHandle)>(&UnityEngine::Playables::PlayableOutputHandle::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::CompareVersion
// Il2CppName: CompareVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Playables::PlayableOutputHandle, ::UnityEngine::Playables::PlayableOutputHandle)>(&UnityEngine::Playables::PlayableOutputHandle::CompareVersion)> {
  static const MethodInfo* get() {
    static auto* lhs = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->byval_arg;
    static auto* rhs = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "CompareVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lhs, rhs});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::PlayableOutputHandle::*)()>(&UnityEngine::Playables::PlayableOutputHandle::IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::GetPlayableOutputType
// Il2CppName: GetPlayableOutputType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (UnityEngine::Playables::PlayableOutputHandle::*)()>(&UnityEngine::Playables::PlayableOutputHandle::GetPlayableOutputType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "GetPlayableOutputType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::SetReferenceObject
// Il2CppName: SetReferenceObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableOutputHandle::*)(::UnityEngine::Object*)>(&UnityEngine::Playables::PlayableOutputHandle::SetReferenceObject)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "SetReferenceObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::SetUserData
// Il2CppName: SetUserData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableOutputHandle::*)(::UnityEngine::Object*)>(&UnityEngine::Playables::PlayableOutputHandle::SetUserData)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "SetUserData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::GetSourcePlayable
// Il2CppName: GetSourcePlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableHandle (UnityEngine::Playables::PlayableOutputHandle::*)()>(&UnityEngine::Playables::PlayableOutputHandle::GetSourcePlayable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "GetSourcePlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::SetSourcePlayable
// Il2CppName: SetSourcePlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableOutputHandle::*)(::UnityEngine::Playables::PlayableHandle, int)>(&UnityEngine::Playables::PlayableOutputHandle::SetSourcePlayable)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "SetSourcePlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, port});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::GetSourceOutputPort
// Il2CppName: GetSourceOutputPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Playables::PlayableOutputHandle::*)()>(&UnityEngine::Playables::PlayableOutputHandle::GetSourceOutputPort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "GetSourceOutputPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::SetWeight
// Il2CppName: SetWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableOutputHandle::*)(float)>(&UnityEngine::Playables::PlayableOutputHandle::SetWeight)> {
  static const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "SetWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::PushNotification
// Il2CppName: PushNotification
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableOutputHandle::*)(::UnityEngine::Playables::PlayableHandle, ::UnityEngine::Playables::INotification*, ::Il2CppObject*)>(&UnityEngine::Playables::PlayableOutputHandle::PushNotification)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->byval_arg;
    static auto* notification = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "INotification")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "PushNotification", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, notification, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::AddNotificationReceiver
// Il2CppName: AddNotificationReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableOutputHandle::*)(::UnityEngine::Playables::INotificationReceiver*)>(&UnityEngine::Playables::PlayableOutputHandle::AddNotificationReceiver)> {
  static const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "INotificationReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "AddNotificationReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::IsValid_Injected
// Il2CppName: IsValid_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Playables::PlayableOutputHandle>)>(&UnityEngine::Playables::PlayableOutputHandle::IsValid_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "IsValid_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::GetPlayableOutputType_Injected
// Il2CppName: GetPlayableOutputType_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(ByRef<::UnityEngine::Playables::PlayableOutputHandle>)>(&UnityEngine::Playables::PlayableOutputHandle::GetPlayableOutputType_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "GetPlayableOutputType_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::SetReferenceObject_Injected
// Il2CppName: SetReferenceObject_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableOutputHandle>, ::UnityEngine::Object*)>(&UnityEngine::Playables::PlayableOutputHandle::SetReferenceObject_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "SetReferenceObject_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, target});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::SetUserData_Injected
// Il2CppName: SetUserData_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableOutputHandle>, ::UnityEngine::Object*)>(&UnityEngine::Playables::PlayableOutputHandle::SetUserData_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "SetUserData_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, target});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::GetSourcePlayable_Injected
// Il2CppName: GetSourcePlayable_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableOutputHandle>, ByRef<::UnityEngine::Playables::PlayableHandle>)>(&UnityEngine::Playables::PlayableOutputHandle::GetSourcePlayable_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "GetSourcePlayable_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::SetSourcePlayable_Injected
// Il2CppName: SetSourcePlayable_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableOutputHandle>, ByRef<::UnityEngine::Playables::PlayableHandle>, int)>(&UnityEngine::Playables::PlayableOutputHandle::SetSourcePlayable_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "SetSourcePlayable_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, target, port});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::GetSourceOutputPort_Injected
// Il2CppName: GetSourceOutputPort_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<::UnityEngine::Playables::PlayableOutputHandle>)>(&UnityEngine::Playables::PlayableOutputHandle::GetSourceOutputPort_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "GetSourceOutputPort_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::SetWeight_Injected
// Il2CppName: SetWeight_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableOutputHandle>, float)>(&UnityEngine::Playables::PlayableOutputHandle::SetWeight_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "SetWeight_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, weight});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::PushNotification_Injected
// Il2CppName: PushNotification_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableOutputHandle>, ByRef<::UnityEngine::Playables::PlayableHandle>, ::UnityEngine::Playables::INotification*, ::Il2CppObject*)>(&UnityEngine::Playables::PlayableOutputHandle::PushNotification_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* notification = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "INotification")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "PushNotification_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, origin, notification, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::AddNotificationReceiver_Injected
// Il2CppName: AddNotificationReceiver_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableOutputHandle>, ::UnityEngine::Playables::INotificationReceiver*)>(&UnityEngine::Playables::PlayableOutputHandle::AddNotificationReceiver_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    static auto* receiver = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "INotificationReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "AddNotificationReceiver_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, receiver});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Playables::PlayableOutputHandle::*)()>(&UnityEngine::Playables::PlayableOutputHandle::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::PlayableOutputHandle::*)(::Il2CppObject*)>(&UnityEngine::Playables::PlayableOutputHandle::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableOutputHandle), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableOutputHandle::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
