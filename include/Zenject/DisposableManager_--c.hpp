// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.DisposableManager
#include "Zenject/DisposableManager.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
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
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::DisposableManager::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DisposableManager::$$c*, "Zenject", "DisposableManager/<>c");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DisposableManager/Zenject.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DisposableManager::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.DisposableManager/Zenject.<>c <>9
    static ::Zenject::DisposableManager::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.DisposableManager/Zenject.<>c <>9
    static void _set_$$9(::Zenject::DisposableManager::$$c* value);
    // Get static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Nullable`1<System.Int32>> <>9__4_1
    static ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int>*, ::System::Nullable_1<int>>* _get_$$9__4_1();
    // Set static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Nullable`1<System.Int32>> <>9__4_1
    static void _set_$$9__4_1(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int>*, ::System::Nullable_1<int>>* value);
    // Get static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Nullable`1<System.Int32>> <>9__4_3
    static ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int>*, ::System::Nullable_1<int>>* _get_$$9__4_3();
    // Set static field: static public System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Nullable`1<System.Int32>> <>9__4_3
    static void _set_$$9__4_3(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int>*, ::System::Nullable_1<int>>* value);
    // Get static field: static public System.Func`2<Zenject.DisposableManager/Zenject.LateDisposableInfo,System.Int32> <>9__10_0
    static ::System::Func_2<::Zenject::DisposableManager::LateDisposableInfo*, int>* _get_$$9__10_0();
    // Set static field: static public System.Func`2<Zenject.DisposableManager/Zenject.LateDisposableInfo,System.Int32> <>9__10_0
    static void _set_$$9__10_0(::System::Func_2<::Zenject::DisposableManager::LateDisposableInfo*, int>* value);
    // Get static field: static public System.Func`2<Zenject.DisposableManager/Zenject.DisposableInfo,System.Int32> <>9__11_0
    static ::System::Func_2<::Zenject::DisposableManager::DisposableInfo, int>* _get_$$9__11_0();
    // Set static field: static public System.Func`2<Zenject.DisposableManager/Zenject.DisposableInfo,System.Int32> <>9__11_0
    static void _set_$$9__11_0(::System::Func_2<::Zenject::DisposableManager::DisposableInfo, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x1E7FE9C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1E7FF00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisposableManager::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::DisposableManager::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisposableManager::$$c*, creationType>()));
    }
    // System.Nullable`1<System.Int32> <.ctor>b__4_1(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x1E7FF08
    ::System::Nullable_1<int> $_ctor$b__4_1(::ModestTree::Util::ValuePair_2<::System::Type*, int>* x);
    // System.Nullable`1<System.Int32> <.ctor>b__4_3(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x1E7FF78
    ::System::Nullable_1<int> $_ctor$b__4_3(::ModestTree::Util::ValuePair_2<::System::Type*, int>* x);
    // System.Int32 <LateDispose>b__10_0(Zenject.DisposableManager/Zenject.LateDisposableInfo x)
    // Offset: 0x1E7FFE8
    int $LateDispose$b__10_0(::Zenject::DisposableManager::LateDisposableInfo* x);
    // System.Int32 <Dispose>b__11_0(Zenject.DisposableManager/Zenject.DisposableInfo x)
    // Offset: 0x1E80000
    int $Dispose$b__11_0(::Zenject::DisposableManager::DisposableInfo x);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1E80008
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1E80064
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.DisposableManager/Zenject.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DisposableManager::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::DisposableManager::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::DisposableManager::$$c::$_ctor$b__4_1
// Il2CppName: <.ctor>b__4_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int> (Zenject::DisposableManager::$$c::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int>*)>(&Zenject::DisposableManager::$$c::$_ctor$b__4_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("ModestTree.Util", "ValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager::$$c*), "<.ctor>b__4_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::$$c::$_ctor$b__4_3
// Il2CppName: <.ctor>b__4_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int> (Zenject::DisposableManager::$$c::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int>*)>(&Zenject::DisposableManager::$$c::$_ctor$b__4_3)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("ModestTree.Util", "ValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager::$$c*), "<.ctor>b__4_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::$$c::$LateDispose$b__10_0
// Il2CppName: <LateDispose>b__10_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::DisposableManager::$$c::*)(::Zenject::DisposableManager::LateDisposableInfo*)>(&Zenject::DisposableManager::$$c::$LateDispose$b__10_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "DisposableManager/LateDisposableInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager::$$c*), "<LateDispose>b__10_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::$$c::$Dispose$b__11_0
// Il2CppName: <Dispose>b__11_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::DisposableManager::$$c::*)(::Zenject::DisposableManager::DisposableInfo)>(&Zenject::DisposableManager::$$c::$Dispose$b__11_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "DisposableManager/DisposableInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager::$$c*), "<Dispose>b__11_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::$$c::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::DisposableManager::$$c::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager::$$c*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::$$c::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::DisposableManager::$$c::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager::$$c*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
