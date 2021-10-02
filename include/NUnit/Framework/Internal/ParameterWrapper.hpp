// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Interfaces.IParameterInfo
#include "NUnit/Framework/Interfaces/IParameterInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.ParameterWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class ParameterWrapper : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::IParameterInfo*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [DebuggerBrowsableAttribute] Offset: 0xEEED00
    // private NUnit.Framework.Interfaces.IMethodInfo <Method>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Interfaces::IMethodInfo* Method;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::IMethodInfo*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xEEED3C
    // private System.Reflection.ParameterInfo <ParameterInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    System::Reflection::ParameterInfo* ParameterInfo;
    // Field size check
    static_assert(sizeof(System::Reflection::ParameterInfo*) == 0x8);
    public:
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::IParameterInfo
    operator NUnit::Framework::Interfaces::IParameterInfo() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::IParameterInfo*>(this);
    }
    // Get instance field reference: private NUnit.Framework.Interfaces.IMethodInfo <Method>k__BackingField
    NUnit::Framework::Interfaces::IMethodInfo*& dyn_$Method$k__BackingField();
    // Get instance field reference: private System.Reflection.ParameterInfo <ParameterInfo>k__BackingField
    System::Reflection::ParameterInfo*& dyn_$ParameterInfo$k__BackingField();
    // public System.Boolean get_IsOptional()
    // Offset: 0x249DE8C
    bool get_IsOptional();
    // private System.Void set_Method(NUnit.Framework.Interfaces.IMethodInfo value)
    // Offset: 0x249DEA8
    void set_Method(NUnit::Framework::Interfaces::IMethodInfo* value);
    // public System.Reflection.ParameterInfo get_ParameterInfo()
    // Offset: 0x249DEB0
    System::Reflection::ParameterInfo* get_ParameterInfo();
    // private System.Void set_ParameterInfo(System.Reflection.ParameterInfo value)
    // Offset: 0x249DEB8
    void set_ParameterInfo(System::Reflection::ParameterInfo* value);
    // public System.Type get_ParameterType()
    // Offset: 0x249DEC0
    System::Type* get_ParameterType();
    // public System.Void .ctor(NUnit.Framework.Interfaces.IMethodInfo method, System.Reflection.ParameterInfo parameterInfo)
    // Offset: 0x249D858
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParameterWrapper* New_ctor(NUnit::Framework::Interfaces::IMethodInfo* method, System::Reflection::ParameterInfo* parameterInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::ParameterWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParameterWrapper*, creationType>(method, parameterInfo)));
    }
    // public T[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::ArrayW<T> GetCustomAttributes(bool inherit) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::ParameterWrapper::GetCustomAttributes");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetCustomAttributes", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inherit)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<::ArrayW<T>, false>(___instance_arg, ___generic__method, inherit);
    }
    // public System.Boolean IsDefined(System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    template<class T>
    bool IsDefined(bool inherit) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::ParameterWrapper::IsDefined");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "IsDefined", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inherit)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___generic__method, inherit);
    }
  }; // NUnit.Framework.Internal.ParameterWrapper
  #pragma pack(pop)
  static check_size<sizeof(ParameterWrapper), 24 + sizeof(System::Reflection::ParameterInfo*)> __NUnit_Framework_Internal_ParameterWrapperSizeCheck;
  static_assert(sizeof(ParameterWrapper) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::ParameterWrapper*, "NUnit.Framework.Internal", "ParameterWrapper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::ParameterWrapper::get_IsOptional
// Il2CppName: get_IsOptional
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::ParameterWrapper::*)()>(&NUnit::Framework::Internal::ParameterWrapper::get_IsOptional)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ParameterWrapper*), "get_IsOptional", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ParameterWrapper::set_Method
// Il2CppName: set_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::ParameterWrapper::*)(NUnit::Framework::Interfaces::IMethodInfo*)>(&NUnit::Framework::Internal::ParameterWrapper::set_Method)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "IMethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ParameterWrapper*), "set_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ParameterWrapper::get_ParameterInfo
// Il2CppName: get_ParameterInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::ParameterInfo* (NUnit::Framework::Internal::ParameterWrapper::*)()>(&NUnit::Framework::Internal::ParameterWrapper::get_ParameterInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ParameterWrapper*), "get_ParameterInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ParameterWrapper::set_ParameterInfo
// Il2CppName: set_ParameterInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::ParameterWrapper::*)(System::Reflection::ParameterInfo*)>(&NUnit::Framework::Internal::ParameterWrapper::set_ParameterInfo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ParameterWrapper*), "set_ParameterInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ParameterWrapper::get_ParameterType
// Il2CppName: get_ParameterType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (NUnit::Framework::Internal::ParameterWrapper::*)()>(&NUnit::Framework::Internal::ParameterWrapper::get_ParameterType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ParameterWrapper*), "get_ParameterType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ParameterWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::ParameterWrapper::GetCustomAttributes
// Il2CppName: GetCustomAttributes
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: NUnit::Framework::Internal::ParameterWrapper::IsDefined
// Il2CppName: IsDefined
// Cannot write MetadataGetter for generic methods!
