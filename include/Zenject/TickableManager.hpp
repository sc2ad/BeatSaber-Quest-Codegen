// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: ITickable
  class ITickable;
  // Forward declaring type: IFixedTickable
  class IFixedTickable;
  // Forward declaring type: ILateTickable
  class ILateTickable;
  // Forward declaring type: TickablesTaskUpdater
  class TickablesTaskUpdater;
  // Forward declaring type: FixedTickablesTaskUpdater
  class FixedTickablesTaskUpdater;
  // Forward declaring type: LateTickablesTaskUpdater
  class LateTickablesTaskUpdater;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: TickableManager
  class TickableManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::TickableManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TickableManager*, "Zenject", "TickableManager");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x59
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.TickableManager
  // [TokenAttribute] Offset: FFFFFFFF
  class TickableManager : public ::Il2CppObject {
    public:
    // Nested type: ::Zenject::TickableManager::$$c__DisplayClass17_0
    class $$c__DisplayClass17_0;
    // Nested type: ::Zenject::TickableManager::$$c
    class $$c;
    // Nested type: ::Zenject::TickableManager::$$c__DisplayClass18_0
    class $$c__DisplayClass18_0;
    // Nested type: ::Zenject::TickableManager::$$c__DisplayClass19_0
    class $$c__DisplayClass19_0;
    public:
    // [InjectAttribute] Offset: 0x10CD76C
    // private readonly System.Collections.Generic.List`1<Zenject.ITickable> _tickables
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::Zenject::ITickable*>* tickables;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::ITickable*>*) == 0x8);
    // [InjectAttribute] Offset: 0x10CD7A4
    // private readonly System.Collections.Generic.List`1<Zenject.IFixedTickable> _fixedTickables
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Zenject::IFixedTickable*>* fixedTickables;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::IFixedTickable*>*) == 0x8);
    // [InjectAttribute] Offset: 0x10CD7DC
    // private readonly System.Collections.Generic.List`1<Zenject.ILateTickable> _lateTickables
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::Zenject::ILateTickable*>* lateTickables;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::ILateTickable*>*) == 0x8);
    // [InjectAttribute] Offset: 0x10CD814
    // private readonly System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> _priorities
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int>*>* priorities;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int>*>*) == 0x8);
    // [InjectAttribute] Offset: 0x10CD84C
    // private readonly System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> _fixedPriorities
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int>*>* fixedPriorities;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int>*>*) == 0x8);
    // [InjectAttribute] Offset: 0x10CD894
    // private readonly System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> _latePriorities
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int>*>* latePriorities;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int>*>*) == 0x8);
    // private readonly Zenject.TickablesTaskUpdater _updater
    // Size: 0x8
    // Offset: 0x40
    ::Zenject::TickablesTaskUpdater* updater;
    // Field size check
    static_assert(sizeof(::Zenject::TickablesTaskUpdater*) == 0x8);
    // private readonly Zenject.FixedTickablesTaskUpdater _fixedUpdater
    // Size: 0x8
    // Offset: 0x48
    ::Zenject::FixedTickablesTaskUpdater* fixedUpdater;
    // Field size check
    static_assert(sizeof(::Zenject::FixedTickablesTaskUpdater*) == 0x8);
    // private readonly Zenject.LateTickablesTaskUpdater _lateUpdater
    // Size: 0x8
    // Offset: 0x50
    ::Zenject::LateTickablesTaskUpdater* lateUpdater;
    // Field size check
    static_assert(sizeof(::Zenject::LateTickablesTaskUpdater*) == 0x8);
    // private System.Boolean _isPaused
    // Size: 0x1
    // Offset: 0x58
    bool isPaused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Zenject.ITickable> _tickables
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::ITickable*>*& dyn__tickables();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Zenject.IFixedTickable> _fixedTickables
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::IFixedTickable*>*& dyn__fixedTickables();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Zenject.ILateTickable> _lateTickables
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::ILateTickable*>*& dyn__lateTickables();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> _priorities
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int>*>*& dyn__priorities();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> _fixedPriorities
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int>*>*& dyn__fixedPriorities();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> _latePriorities
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int>*>*& dyn__latePriorities();
    // Get instance field reference: private readonly Zenject.TickablesTaskUpdater _updater
    [[deprecated("Use field access instead!")]] ::Zenject::TickablesTaskUpdater*& dyn__updater();
    // Get instance field reference: private readonly Zenject.FixedTickablesTaskUpdater _fixedUpdater
    [[deprecated("Use field access instead!")]] ::Zenject::FixedTickablesTaskUpdater*& dyn__fixedUpdater();
    // Get instance field reference: private readonly Zenject.LateTickablesTaskUpdater _lateUpdater
    [[deprecated("Use field access instead!")]] ::Zenject::LateTickablesTaskUpdater*& dyn__lateUpdater();
    // Get instance field reference: private System.Boolean _isPaused
    [[deprecated("Use field access instead!")]] bool& dyn__isPaused();
    // public System.Collections.Generic.IEnumerable`1<Zenject.ITickable> get_Tickables()
    // Offset: 0x1D695C4
    ::System::Collections::Generic::IEnumerable_1<::Zenject::ITickable*>* get_Tickables();
    // public System.Boolean get_IsPaused()
    // Offset: 0x1D695CC
    bool get_IsPaused();
    // public System.Void set_IsPaused(System.Boolean value)
    // Offset: 0x1D695D4
    void set_IsPaused(bool value);
    // public System.Void .ctor()
    // Offset: 0x1D694D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TickableManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::TickableManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TickableManager*, creationType>()));
    }
    // public System.Void Initialize()
    // Offset: 0x1D695E0
    void Initialize();
    // private System.Void InitFixedTickables()
    // Offset: 0x1D69C60
    void InitFixedTickables();
    // private System.Void InitTickables()
    // Offset: 0x1D6960C
    void InitTickables();
    // private System.Void InitLateTickables()
    // Offset: 0x1D6A2B4
    void InitLateTickables();
    // public System.Void Add(Zenject.ITickable tickable, System.Int32 priority)
    // Offset: 0x1D61680
    void Add(::Zenject::ITickable* tickable, int priority);
    // public System.Void Add(Zenject.ITickable tickable)
    // Offset: 0x1D6A920
    void Add(::Zenject::ITickable* tickable);
    // public System.Void AddLate(Zenject.ILateTickable tickable, System.Int32 priority)
    // Offset: 0x1D6A928
    void AddLate(::Zenject::ILateTickable* tickable, int priority);
    // public System.Void AddLate(Zenject.ILateTickable tickable)
    // Offset: 0x1D6A998
    void AddLate(::Zenject::ILateTickable* tickable);
    // public System.Void AddFixed(Zenject.IFixedTickable tickable, System.Int32 priority)
    // Offset: 0x1D6A9A0
    void AddFixed(::Zenject::IFixedTickable* tickable, int priority);
    // public System.Void AddFixed(Zenject.IFixedTickable tickable)
    // Offset: 0x1D6AA10
    void AddFixed(::Zenject::IFixedTickable* tickable);
    // public System.Void Remove(Zenject.ITickable tickable)
    // Offset: 0x1D6AA7C
    void Remove(::Zenject::ITickable* tickable);
    // public System.Void RemoveLate(Zenject.ILateTickable tickable)
    // Offset: 0x1D6AAE4
    void RemoveLate(::Zenject::ILateTickable* tickable);
    // public System.Void RemoveFixed(Zenject.IFixedTickable tickable)
    // Offset: 0x1D6AB4C
    void RemoveFixed(::Zenject::IFixedTickable* tickable);
    // public System.Void Update()
    // Offset: 0x1D6ABB4
    void Update();
    // public System.Void FixedUpdate()
    // Offset: 0x1D6AC38
    void FixedUpdate();
    // public System.Void LateUpdate()
    // Offset: 0x1D6ACBC
    void LateUpdate();
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1D6AD40
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private System.Void __zenFieldSetter0(System.Object P_0, System.Object P_1)
    // Offset: 0x1D6AD98
    static void __zenFieldSetter0(::Il2CppObject* P_0, ::Il2CppObject* P_1);
    // static private System.Void __zenFieldSetter1(System.Object P_0, System.Object P_1)
    // Offset: 0x1D6AE6C
    static void __zenFieldSetter1(::Il2CppObject* P_0, ::Il2CppObject* P_1);
    // static private System.Void __zenFieldSetter2(System.Object P_0, System.Object P_1)
    // Offset: 0x1D6AF40
    static void __zenFieldSetter2(::Il2CppObject* P_0, ::Il2CppObject* P_1);
    // static private System.Void __zenFieldSetter3(System.Object P_0, System.Object P_1)
    // Offset: 0x1D6B014
    static void __zenFieldSetter3(::Il2CppObject* P_0, ::Il2CppObject* P_1);
    // static private System.Void __zenFieldSetter4(System.Object P_0, System.Object P_1)
    // Offset: 0x1D6B0E8
    static void __zenFieldSetter4(::Il2CppObject* P_0, ::Il2CppObject* P_1);
    // static private System.Void __zenFieldSetter5(System.Object P_0, System.Object P_1)
    // Offset: 0x1D6B1BC
    static void __zenFieldSetter5(::Il2CppObject* P_0, ::Il2CppObject* P_1);
    // static private System.Void __zenInjectMethod0(System.Object P_0, System.Object[] P_1)
    // Offset: 0x1D6B290
    static void __zenInjectMethod0(::Il2CppObject* P_0, ::ArrayW<::Il2CppObject*> P_1);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1D6B318
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.TickableManager
  #pragma pack(pop)
  static check_size<sizeof(TickableManager), 88 + sizeof(bool)> __Zenject_TickableManagerSizeCheck;
  static_assert(sizeof(TickableManager) == 0x59);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::TickableManager::get_Tickables
// Il2CppName: get_Tickables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::ITickable*>* (Zenject::TickableManager::*)()>(&Zenject::TickableManager::get_Tickables)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "get_Tickables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::get_IsPaused
// Il2CppName: get_IsPaused
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::TickableManager::*)()>(&Zenject::TickableManager::get_IsPaused)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "get_IsPaused", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::set_IsPaused
// Il2CppName: set_IsPaused
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickableManager::*)(bool)>(&Zenject::TickableManager::set_IsPaused)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "set_IsPaused", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::TickableManager::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickableManager::*)()>(&Zenject::TickableManager::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::InitFixedTickables
// Il2CppName: InitFixedTickables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickableManager::*)()>(&Zenject::TickableManager::InitFixedTickables)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "InitFixedTickables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::InitTickables
// Il2CppName: InitTickables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickableManager::*)()>(&Zenject::TickableManager::InitTickables)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "InitTickables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::InitLateTickables
// Il2CppName: InitLateTickables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickableManager::*)()>(&Zenject::TickableManager::InitLateTickables)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "InitLateTickables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickableManager::*)(::Zenject::ITickable*, int)>(&Zenject::TickableManager::Add)> {
  static const MethodInfo* get() {
    static auto* tickable = &::il2cpp_utils::GetClassFromName("Zenject", "ITickable")->byval_arg;
    static auto* priority = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tickable, priority});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickableManager::*)(::Zenject::ITickable*)>(&Zenject::TickableManager::Add)> {
  static const MethodInfo* get() {
    static auto* tickable = &::il2cpp_utils::GetClassFromName("Zenject", "ITickable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tickable});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::AddLate
// Il2CppName: AddLate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickableManager::*)(::Zenject::ILateTickable*, int)>(&Zenject::TickableManager::AddLate)> {
  static const MethodInfo* get() {
    static auto* tickable = &::il2cpp_utils::GetClassFromName("Zenject", "ILateTickable")->byval_arg;
    static auto* priority = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "AddLate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tickable, priority});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::AddLate
// Il2CppName: AddLate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickableManager::*)(::Zenject::ILateTickable*)>(&Zenject::TickableManager::AddLate)> {
  static const MethodInfo* get() {
    static auto* tickable = &::il2cpp_utils::GetClassFromName("Zenject", "ILateTickable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "AddLate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tickable});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::AddFixed
// Il2CppName: AddFixed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickableManager::*)(::Zenject::IFixedTickable*, int)>(&Zenject::TickableManager::AddFixed)> {
  static const MethodInfo* get() {
    static auto* tickable = &::il2cpp_utils::GetClassFromName("Zenject", "IFixedTickable")->byval_arg;
    static auto* priority = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "AddFixed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tickable, priority});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::AddFixed
// Il2CppName: AddFixed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickableManager::*)(::Zenject::IFixedTickable*)>(&Zenject::TickableManager::AddFixed)> {
  static const MethodInfo* get() {
    static auto* tickable = &::il2cpp_utils::GetClassFromName("Zenject", "IFixedTickable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "AddFixed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tickable});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickableManager::*)(::Zenject::ITickable*)>(&Zenject::TickableManager::Remove)> {
  static const MethodInfo* get() {
    static auto* tickable = &::il2cpp_utils::GetClassFromName("Zenject", "ITickable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tickable});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::RemoveLate
// Il2CppName: RemoveLate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickableManager::*)(::Zenject::ILateTickable*)>(&Zenject::TickableManager::RemoveLate)> {
  static const MethodInfo* get() {
    static auto* tickable = &::il2cpp_utils::GetClassFromName("Zenject", "ILateTickable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "RemoveLate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tickable});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::RemoveFixed
// Il2CppName: RemoveFixed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickableManager::*)(::Zenject::IFixedTickable*)>(&Zenject::TickableManager::RemoveFixed)> {
  static const MethodInfo* get() {
    static auto* tickable = &::il2cpp_utils::GetClassFromName("Zenject", "IFixedTickable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "RemoveFixed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tickable});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickableManager::*)()>(&Zenject::TickableManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickableManager::*)()>(&Zenject::TickableManager::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickableManager::*)()>(&Zenject::TickableManager::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::TickableManager::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::__zenFieldSetter0
// Il2CppName: __zenFieldSetter0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*)>(&Zenject::TickableManager::__zenFieldSetter0)> {
  static const MethodInfo* get() {
    static auto* P_0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* P_1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "__zenFieldSetter0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0, P_1});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::__zenFieldSetter1
// Il2CppName: __zenFieldSetter1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*)>(&Zenject::TickableManager::__zenFieldSetter1)> {
  static const MethodInfo* get() {
    static auto* P_0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* P_1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "__zenFieldSetter1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0, P_1});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::__zenFieldSetter2
// Il2CppName: __zenFieldSetter2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*)>(&Zenject::TickableManager::__zenFieldSetter2)> {
  static const MethodInfo* get() {
    static auto* P_0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* P_1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "__zenFieldSetter2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0, P_1});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::__zenFieldSetter3
// Il2CppName: __zenFieldSetter3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*)>(&Zenject::TickableManager::__zenFieldSetter3)> {
  static const MethodInfo* get() {
    static auto* P_0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* P_1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "__zenFieldSetter3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0, P_1});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::__zenFieldSetter4
// Il2CppName: __zenFieldSetter4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*)>(&Zenject::TickableManager::__zenFieldSetter4)> {
  static const MethodInfo* get() {
    static auto* P_0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* P_1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "__zenFieldSetter4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0, P_1});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::__zenFieldSetter5
// Il2CppName: __zenFieldSetter5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*)>(&Zenject::TickableManager::__zenFieldSetter5)> {
  static const MethodInfo* get() {
    static auto* P_0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* P_1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "__zenFieldSetter5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0, P_1});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::__zenInjectMethod0
// Il2CppName: __zenInjectMethod0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::ArrayW<::Il2CppObject*>)>(&Zenject::TickableManager::__zenInjectMethod0)> {
  static const MethodInfo* get() {
    static auto* P_0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* P_1 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "__zenInjectMethod0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0, P_1});
  }
};
// Writing MetadataGetter for method: Zenject::TickableManager::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::TickableManager::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickableManager*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
