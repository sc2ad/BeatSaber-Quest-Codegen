// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Activation.IActivator
#include "System/Runtime/Remoting/Activation/IActivator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionReturnMessage
  class IConstructionReturnMessage;
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: AppDomainLevelActivator
  class AppDomainLevelActivator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Activation::AppDomainLevelActivator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::AppDomainLevelActivator*, "System.Runtime.Remoting.Activation", "AppDomainLevelActivator");
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Activation.AppDomainLevelActivator
  // [TokenAttribute] Offset: FFFFFFFF
  class AppDomainLevelActivator : public ::Il2CppObject/*, public ::System::Runtime::Remoting::Activation::IActivator*/ {
    public:
    public:
    // private System.String _activationUrl
    // Size: 0x8
    // Offset: 0x10
    ::StringW activationUrl;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Runtime.Remoting.Activation.IActivator _next
    // Size: 0x8
    // Offset: 0x18
    ::System::Runtime::Remoting::Activation::IActivator* next;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Activation::IActivator*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Activation::IActivator
    operator ::System::Runtime::Remoting::Activation::IActivator() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Activation::IActivator*>(this);
    }
    // Creating interface conversion operator: i_IActivator
    inline ::System::Runtime::Remoting::Activation::IActivator* i_IActivator() noexcept {
      return reinterpret_cast<::System::Runtime::Remoting::Activation::IActivator*>(this);
    }
    // Get instance field reference: private System.String _activationUrl
    [[deprecated("Use field access instead!")]] ::StringW& dyn__activationUrl();
    // Get instance field reference: private System.Runtime.Remoting.Activation.IActivator _next
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Activation::IActivator*& dyn__next();
    // public System.Runtime.Remoting.Activation.IActivator get_NextActivator()
    // Offset: 0x1DE3DA0
    ::System::Runtime::Remoting::Activation::IActivator* get_NextActivator();
    // public System.Void .ctor(System.String activationUrl, System.Runtime.Remoting.Activation.IActivator next)
    // Offset: 0x1DE37C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppDomainLevelActivator* New_ctor(::StringW activationUrl, ::System::Runtime::Remoting::Activation::IActivator* next) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Activation::AppDomainLevelActivator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppDomainLevelActivator*, creationType>(activationUrl, next)));
    }
    // public System.Runtime.Remoting.Activation.IConstructionReturnMessage Activate(System.Runtime.Remoting.Activation.IConstructionCallMessage ctorCall)
    // Offset: 0x1DE3DA8
    ::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);
  }; // System.Runtime.Remoting.Activation.AppDomainLevelActivator
  #pragma pack(pop)
  static check_size<sizeof(AppDomainLevelActivator), 24 + sizeof(::System::Runtime::Remoting::Activation::IActivator*)> __System_Runtime_Remoting_Activation_AppDomainLevelActivatorSizeCheck;
  static_assert(sizeof(AppDomainLevelActivator) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::AppDomainLevelActivator::get_NextActivator
// Il2CppName: get_NextActivator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IActivator* (System::Runtime::Remoting::Activation::AppDomainLevelActivator::*)()>(&System::Runtime::Remoting::Activation::AppDomainLevelActivator::get_NextActivator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::AppDomainLevelActivator*), "get_NextActivator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::AppDomainLevelActivator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::AppDomainLevelActivator::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IConstructionReturnMessage* (System::Runtime::Remoting::Activation::AppDomainLevelActivator::*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&System::Runtime::Remoting::Activation::AppDomainLevelActivator::Activate)> {
  static const MethodInfo* get() {
    static auto* ctorCall = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Activation", "IConstructionCallMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::AppDomainLevelActivator*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctorCall});
  }
};
