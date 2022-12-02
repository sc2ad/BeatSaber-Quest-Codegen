// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ConventionBindInfo
  class ConventionBindInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ConventionAssemblySelectionBinder
  class ConventionAssemblySelectionBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ConventionAssemblySelectionBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConventionAssemblySelectionBinder*, "Zenject", "ConventionAssemblySelectionBinder");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConventionAssemblySelectionBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class ConventionAssemblySelectionBinder : public ::Il2CppObject {
    public:
    // Nested type: ::Zenject::ConventionAssemblySelectionBinder::$$c
    class $$c;
    // Nested type: ::Zenject::ConventionAssemblySelectionBinder::$$c__DisplayClass12_0
    class $$c__DisplayClass12_0;
    public:
    // private Zenject.ConventionBindInfo <BindInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::ConventionBindInfo* BindInfo;
    // Field size check
    static_assert(sizeof(::Zenject::ConventionBindInfo*) == 0x8);
    public:
    // Creating conversion operator: operator ::Zenject::ConventionBindInfo*
    constexpr operator ::Zenject::ConventionBindInfo*() const noexcept {
      return BindInfo;
    }
    // Get instance field reference: private Zenject.ConventionBindInfo <BindInfo>k__BackingField
    [[deprecated("Use field access instead!")]] ::Zenject::ConventionBindInfo*& dyn_$BindInfo$k__BackingField();
    // protected Zenject.ConventionBindInfo get_BindInfo()
    // Offset: 0x17B9BCC
    ::Zenject::ConventionBindInfo* get_BindInfo();
    // private System.Void set_BindInfo(Zenject.ConventionBindInfo value)
    // Offset: 0x17B9BD4
    void set_BindInfo(::Zenject::ConventionBindInfo* value);
    // public System.Void .ctor(Zenject.ConventionBindInfo bindInfo)
    // Offset: 0x17B9BA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionAssemblySelectionBinder* New_ctor(::Zenject::ConventionBindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConventionAssemblySelectionBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionAssemblySelectionBinder*, creationType>(bindInfo)));
    }
    // public System.Void FromAllAssemblies()
    // Offset: 0x17B9BDC
    void FromAllAssemblies();
    // public System.Void FromAssemblyContaining()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void FromAssemblyContaining() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConventionAssemblySelectionBinder::FromAssemblyContaining");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromAssemblyContaining", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method);
    }
    // public System.Void FromAssembliesContaining(params System.Type[] types)
    // Offset: 0x17B9BE0
    void FromAssembliesContaining(::ArrayW<::System::Type*> types);
    // public System.Void FromAssembliesContaining(System.Collections.Generic.IEnumerable`1<System.Type> types)
    // Offset: 0x17B9BE4
    void FromAssembliesContaining(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);
    // public System.Void FromThisAssembly()
    // Offset: 0x17B9DB8
    void FromThisAssembly();
    // public System.Void FromAssembly(System.Reflection.Assembly assembly)
    // Offset: 0x17B9E74
    void FromAssembly(::System::Reflection::Assembly* assembly);
    // public System.Void FromAssemblies(params System.Reflection.Assembly[] assemblies)
    // Offset: 0x17B9E70
    void FromAssemblies(::ArrayW<::System::Reflection::Assembly*> assemblies);
    // public System.Void FromAssemblies(System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly> assemblies)
    // Offset: 0x17B9D00
    void FromAssemblies(::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* assemblies);
    // public System.Void FromAssembliesWhere(System.Func`2<System.Reflection.Assembly,System.Boolean> predicate)
    // Offset: 0x17B9F94
    void FromAssembliesWhere(::System::Func_2<::System::Reflection::Assembly*, bool>* predicate);
  }; // Zenject.ConventionAssemblySelectionBinder
  #pragma pack(pop)
  static check_size<sizeof(ConventionAssemblySelectionBinder), 16 + sizeof(::Zenject::ConventionBindInfo*)> __Zenject_ConventionAssemblySelectionBinderSizeCheck;
  static_assert(sizeof(ConventionAssemblySelectionBinder) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ConventionAssemblySelectionBinder::get_BindInfo
// Il2CppName: get_BindInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConventionBindInfo* (Zenject::ConventionAssemblySelectionBinder::*)()>(&Zenject::ConventionAssemblySelectionBinder::get_BindInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionAssemblySelectionBinder*), "get_BindInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionAssemblySelectionBinder::set_BindInfo
// Il2CppName: set_BindInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ConventionAssemblySelectionBinder::*)(::Zenject::ConventionBindInfo*)>(&Zenject::ConventionAssemblySelectionBinder::set_BindInfo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "ConventionBindInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionAssemblySelectionBinder*), "set_BindInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionAssemblySelectionBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ConventionAssemblySelectionBinder::FromAllAssemblies
// Il2CppName: FromAllAssemblies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ConventionAssemblySelectionBinder::*)()>(&Zenject::ConventionAssemblySelectionBinder::FromAllAssemblies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionAssemblySelectionBinder*), "FromAllAssemblies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionAssemblySelectionBinder::FromAssemblyContaining
// Il2CppName: FromAssemblyContaining
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::ConventionAssemblySelectionBinder::FromAssembliesContaining
// Il2CppName: FromAssembliesContaining
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ConventionAssemblySelectionBinder::*)(::ArrayW<::System::Type*>)>(&Zenject::ConventionAssemblySelectionBinder::FromAssembliesContaining)> {
  static const MethodInfo* get() {
    static auto* types = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionAssemblySelectionBinder*), "FromAssembliesContaining", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{types});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionAssemblySelectionBinder::FromAssembliesContaining
// Il2CppName: FromAssembliesContaining
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ConventionAssemblySelectionBinder::*)(::System::Collections::Generic::IEnumerable_1<::System::Type*>*)>(&Zenject::ConventionAssemblySelectionBinder::FromAssembliesContaining)> {
  static const MethodInfo* get() {
    static auto* types = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionAssemblySelectionBinder*), "FromAssembliesContaining", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{types});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionAssemblySelectionBinder::FromThisAssembly
// Il2CppName: FromThisAssembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ConventionAssemblySelectionBinder::*)()>(&Zenject::ConventionAssemblySelectionBinder::FromThisAssembly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionAssemblySelectionBinder*), "FromThisAssembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionAssemblySelectionBinder::FromAssembly
// Il2CppName: FromAssembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ConventionAssemblySelectionBinder::*)(::System::Reflection::Assembly*)>(&Zenject::ConventionAssemblySelectionBinder::FromAssembly)> {
  static const MethodInfo* get() {
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionAssemblySelectionBinder*), "FromAssembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionAssemblySelectionBinder::FromAssemblies
// Il2CppName: FromAssemblies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ConventionAssemblySelectionBinder::*)(::ArrayW<::System::Reflection::Assembly*>)>(&Zenject::ConventionAssemblySelectionBinder::FromAssemblies)> {
  static const MethodInfo* get() {
    static auto* assemblies = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionAssemblySelectionBinder*), "FromAssemblies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assemblies});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionAssemblySelectionBinder::FromAssemblies
// Il2CppName: FromAssemblies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ConventionAssemblySelectionBinder::*)(::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*)>(&Zenject::ConventionAssemblySelectionBinder::FromAssemblies)> {
  static const MethodInfo* get() {
    static auto* assemblies = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionAssemblySelectionBinder*), "FromAssemblies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assemblies});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionAssemblySelectionBinder::FromAssembliesWhere
// Il2CppName: FromAssembliesWhere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ConventionAssemblySelectionBinder::*)(::System::Func_2<::System::Reflection::Assembly*, bool>*)>(&Zenject::ConventionAssemblySelectionBinder::FromAssembliesWhere)> {
  static const MethodInfo* get() {
    static auto* predicate = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionAssemblySelectionBinder*), "FromAssembliesWhere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{predicate});
  }
};
