// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.CachedOpenTypeProvider
#include "Zenject/CachedOpenTypeProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: CachedProvider
  class CachedProvider;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::CachedOpenTypeProvider::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::CachedOpenTypeProvider::$$c*, "Zenject", "CachedOpenTypeProvider/<>c");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.CachedOpenTypeProvider/Zenject.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CachedOpenTypeProvider::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.CachedOpenTypeProvider/Zenject.<>c <>9
    static ::Zenject::CachedOpenTypeProvider::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.CachedOpenTypeProvider/Zenject.<>c <>9
    static void _set_$$9(::Zenject::CachedOpenTypeProvider::$$c* value);
    // Get static field: static public System.Func`2<Zenject.CachedProvider,System.Int32> <>9__8_0
    static ::System::Func_2<::Zenject::CachedProvider*, int>* _get_$$9__8_0();
    // Set static field: static public System.Func`2<Zenject.CachedProvider,System.Int32> <>9__8_0
    static void _set_$$9__8_0(::System::Func_2<::Zenject::CachedProvider*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x1735D94
    static void _cctor();
    // System.Int32 <get_NumInstances>b__8_0(Zenject.CachedProvider x)
    // Offset: 0x1735E00
    int $get_NumInstances$b__8_0(::Zenject::CachedProvider* x);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1735EB0
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1735F0C
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // public System.Void .ctor()
    // Offset: 0x1735DF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CachedOpenTypeProvider::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::CachedOpenTypeProvider::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CachedOpenTypeProvider::$$c*, creationType>()));
    }
  }; // Zenject.CachedOpenTypeProvider/Zenject.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::CachedOpenTypeProvider::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::CachedOpenTypeProvider::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::CachedOpenTypeProvider::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::CachedOpenTypeProvider::$$c::$get_NumInstances$b__8_0
// Il2CppName: <get_NumInstances>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::CachedOpenTypeProvider::$$c::*)(::Zenject::CachedProvider*)>(&Zenject::CachedOpenTypeProvider::$$c::$get_NumInstances$b__8_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "CachedProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::CachedOpenTypeProvider::$$c*), "<get_NumInstances>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::CachedOpenTypeProvider::$$c::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::CachedOpenTypeProvider::$$c::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::CachedOpenTypeProvider::$$c*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::CachedOpenTypeProvider::$$c::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::CachedOpenTypeProvider::$$c::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::CachedOpenTypeProvider::$$c*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::CachedOpenTypeProvider::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
