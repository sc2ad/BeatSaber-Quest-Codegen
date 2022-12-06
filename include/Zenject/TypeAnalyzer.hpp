// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ReflectionBakingCoverageModes
#include "Zenject/ReflectionBakingCoverageModes.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: TypeAnalyzer
  class TypeAnalyzer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::TypeAnalyzer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TypeAnalyzer*, "Zenject", "TypeAnalyzer");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.TypeAnalyzer
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeAnalyzer : public ::Il2CppObject {
    public:
    // Nested type: ::Zenject::TypeAnalyzer::$$c__DisplayClass23_0
    class $$c__DisplayClass23_0;
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,Zenject.InjectTypeInfo> _typeInfo
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::InjectTypeInfo*>* _get__typeInfo();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,Zenject.InjectTypeInfo> _typeInfo
    static void _set__typeInfo(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::InjectTypeInfo*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> _allowDuringValidation
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* _get__allowDuringValidation();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> _allowDuringValidation
    static void _set__allowDuringValidation(::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* value);
    // static field const value: static public System.String ReflectionBakingGetInjectInfoMethodName
    static constexpr const char* ReflectionBakingGetInjectInfoMethodName = "__zenCreateInjectTypeInfo";
    // Get static field: static public System.String ReflectionBakingGetInjectInfoMethodName
    static ::StringW _get_ReflectionBakingGetInjectInfoMethodName();
    // Set static field: static public System.String ReflectionBakingGetInjectInfoMethodName
    static void _set_ReflectionBakingGetInjectInfoMethodName(::StringW value);
    // static field const value: static public System.String ReflectionBakingFactoryMethodName
    static constexpr const char* ReflectionBakingFactoryMethodName = "__zenCreate";
    // Get static field: static public System.String ReflectionBakingFactoryMethodName
    static ::StringW _get_ReflectionBakingFactoryMethodName();
    // Set static field: static public System.String ReflectionBakingFactoryMethodName
    static void _set_ReflectionBakingFactoryMethodName(::StringW value);
    // static field const value: static public System.String ReflectionBakingInjectMethodPrefix
    static constexpr const char* ReflectionBakingInjectMethodPrefix = "__zenInjectMethod";
    // Get static field: static public System.String ReflectionBakingInjectMethodPrefix
    static ::StringW _get_ReflectionBakingInjectMethodPrefix();
    // Set static field: static public System.String ReflectionBakingInjectMethodPrefix
    static void _set_ReflectionBakingInjectMethodPrefix(::StringW value);
    // static field const value: static public System.String ReflectionBakingFieldSetterPrefix
    static constexpr const char* ReflectionBakingFieldSetterPrefix = "__zenFieldSetter";
    // Get static field: static public System.String ReflectionBakingFieldSetterPrefix
    static ::StringW _get_ReflectionBakingFieldSetterPrefix();
    // Set static field: static public System.String ReflectionBakingFieldSetterPrefix
    static void _set_ReflectionBakingFieldSetterPrefix(::StringW value);
    // static field const value: static public System.String ReflectionBakingPropertySetterPrefix
    static constexpr const char* ReflectionBakingPropertySetterPrefix = "__zenPropertySetter";
    // Get static field: static public System.String ReflectionBakingPropertySetterPrefix
    static ::StringW _get_ReflectionBakingPropertySetterPrefix();
    // Set static field: static public System.String ReflectionBakingPropertySetterPrefix
    static void _set_ReflectionBakingPropertySetterPrefix(::StringW value);
    // Get static field: static private Zenject.ReflectionBakingCoverageModes <ReflectionBakingCoverageMode>k__BackingField
    static ::Zenject::ReflectionBakingCoverageModes _get_$ReflectionBakingCoverageMode$k__BackingField();
    // Set static field: static private Zenject.ReflectionBakingCoverageModes <ReflectionBakingCoverageMode>k__BackingField
    static void _set_$ReflectionBakingCoverageMode$k__BackingField(::Zenject::ReflectionBakingCoverageModes value);
    // static public Zenject.ReflectionBakingCoverageModes get_ReflectionBakingCoverageMode()
    // Offset: 0x1DC2250
    static ::Zenject::ReflectionBakingCoverageModes get_ReflectionBakingCoverageMode();
    // static public System.Void set_ReflectionBakingCoverageMode(Zenject.ReflectionBakingCoverageModes value)
    // Offset: 0x1DC22B8
    static void set_ReflectionBakingCoverageMode(::Zenject::ReflectionBakingCoverageModes value);
    // static private System.Void .cctor()
    // Offset: 0x1DC3084
    static void _cctor();
    // static public System.Boolean ShouldAllowDuringValidation()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool ShouldAllowDuringValidation() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::TypeAnalyzer::ShouldAllowDuringValidation");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "ShouldAllowDuringValidation", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static public System.Boolean ShouldAllowDuringValidation(System.Type type)
    // Offset: 0x1DC2324
    static bool ShouldAllowDuringValidation(::System::Type* type);
    // static private System.Boolean ShouldAllowDuringValidationInternal(System.Type type)
    // Offset: 0x1DC2410
    static bool ShouldAllowDuringValidationInternal(::System::Type* type);
    // static public System.Boolean HasInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool HasInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::TypeAnalyzer::HasInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "HasInfo", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static public System.Boolean HasInfo(System.Type type)
    // Offset: 0x1DC2520
    static bool HasInfo(::System::Type* type);
    // static public Zenject.InjectTypeInfo GetInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::Zenject::InjectTypeInfo* GetInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::TypeAnalyzer::GetInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "GetInfo", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static public Zenject.InjectTypeInfo GetInfo(System.Type type)
    // Offset: 0x1DBD370
    static ::Zenject::InjectTypeInfo* GetInfo(::System::Type* type);
    // static public Zenject.InjectTypeInfo TryGetInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::Zenject::InjectTypeInfo* TryGetInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::TypeAnalyzer::TryGetInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "TryGetInfo", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static public Zenject.InjectTypeInfo TryGetInfo(System.Type type)
    // Offset: 0x1DC2590
    static ::Zenject::InjectTypeInfo* TryGetInfo(::System::Type* type);
    // static private Zenject.InjectTypeInfo GetInfoInternal(System.Type type)
    // Offset: 0x1DC277C
    static ::Zenject::InjectTypeInfo* GetInfoInternal(::System::Type* type);
    // static public System.Boolean ShouldSkipTypeAnalysis(System.Type type)
    // Offset: 0x1DC2A00
    static bool ShouldSkipTypeAnalysis(::System::Type* type);
    // static private System.Boolean IsStaticType(System.Type type)
    // Offset: 0x1DC2FDC
    static bool IsStaticType(::System::Type* type);
    // static private Zenject.InjectTypeInfo CreateTypeInfoFromReflection(System.Type type)
    // Offset: 0x1DC2DA4
    static ::Zenject::InjectTypeInfo* CreateTypeInfoFromReflection(::System::Type* type);
  }; // Zenject.TypeAnalyzer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::get_ReflectionBakingCoverageMode
// Il2CppName: get_ReflectionBakingCoverageMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ReflectionBakingCoverageModes (*)()>(&Zenject::TypeAnalyzer::get_ReflectionBakingCoverageMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TypeAnalyzer*), "get_ReflectionBakingCoverageMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::set_ReflectionBakingCoverageMode
// Il2CppName: set_ReflectionBakingCoverageMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Zenject::ReflectionBakingCoverageModes)>(&Zenject::TypeAnalyzer::set_ReflectionBakingCoverageMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "ReflectionBakingCoverageModes")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TypeAnalyzer*), "set_ReflectionBakingCoverageMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::TypeAnalyzer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TypeAnalyzer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::ShouldAllowDuringValidation
// Il2CppName: ShouldAllowDuringValidation
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::ShouldAllowDuringValidation
// Il2CppName: ShouldAllowDuringValidation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Zenject::TypeAnalyzer::ShouldAllowDuringValidation)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TypeAnalyzer*), "ShouldAllowDuringValidation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::ShouldAllowDuringValidationInternal
// Il2CppName: ShouldAllowDuringValidationInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Zenject::TypeAnalyzer::ShouldAllowDuringValidationInternal)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TypeAnalyzer*), "ShouldAllowDuringValidationInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::HasInfo
// Il2CppName: HasInfo
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::HasInfo
// Il2CppName: HasInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Zenject::TypeAnalyzer::HasInfo)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TypeAnalyzer*), "HasInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::GetInfo
// Il2CppName: GetInfo
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::GetInfo
// Il2CppName: GetInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)(::System::Type*)>(&Zenject::TypeAnalyzer::GetInfo)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TypeAnalyzer*), "GetInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::TryGetInfo
// Il2CppName: TryGetInfo
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::TryGetInfo
// Il2CppName: TryGetInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)(::System::Type*)>(&Zenject::TypeAnalyzer::TryGetInfo)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TypeAnalyzer*), "TryGetInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::GetInfoInternal
// Il2CppName: GetInfoInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)(::System::Type*)>(&Zenject::TypeAnalyzer::GetInfoInternal)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TypeAnalyzer*), "GetInfoInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::ShouldSkipTypeAnalysis
// Il2CppName: ShouldSkipTypeAnalysis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Zenject::TypeAnalyzer::ShouldSkipTypeAnalysis)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TypeAnalyzer*), "ShouldSkipTypeAnalysis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::IsStaticType
// Il2CppName: IsStaticType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Zenject::TypeAnalyzer::IsStaticType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TypeAnalyzer*), "IsStaticType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::TypeAnalyzer::CreateTypeInfoFromReflection
// Il2CppName: CreateTypeInfoFromReflection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)(::System::Type*)>(&Zenject::TypeAnalyzer::CreateTypeInfoFromReflection)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TypeAnalyzer*), "CreateTypeInfoFromReflection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
