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
  // Skipping declaration: <>c because it is already included!
  // Skipping declaration: <>c__DisplayClass8_0 because it is already included!
  // Forward declaring type: BindStatement
  class BindStatement;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: SignalBindingBindInfo
  class SignalBindingBindInfo;
  // Forward declaring type: SignalCopyBinder
  class SignalCopyBinder;
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindSignalFromBinder`2<TObject, TSignal>
  template<typename TObject, typename TSignal>
  class BindSignalFromBinder_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::BindSignalFromBinder_2, "Zenject", "BindSignalFromBinder`2");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.BindSignalFromBinder`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TObject, typename TSignal>
  class BindSignalFromBinder_2 : public ::Il2CppObject {
    public:
    // Nested type: ::Zenject::BindSignalFromBinder_2::$$c<TObject, TSignal>
    class $$c;
    // Nested type: ::Zenject::BindSignalFromBinder_2::$$c__DisplayClass8_0<TObject, TSignal>
    class $$c__DisplayClass8_0;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.BindSignalFromBinder`2/Zenject.<>c
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = BindSignalFromBinder_2<TObject, TSignal>*;
      static constexpr std::string_view NESTED_NAME = "<>c";
      static constexpr bool IS_VALUE_TYPE = false;
      // Autogenerated static field getter
      // Get static field: static public readonly Zenject.BindSignalFromBinder`2/Zenject.<>c<TObject,TSignal> <>9
      static typename ::Zenject::BindSignalFromBinder_2<TObject, TSignal>::$$c* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename ::Zenject::BindSignalFromBinder_2<TObject, TSignal>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename BindSignalFromBinder_2<TObject, TSignal>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly Zenject.BindSignalFromBinder`2/Zenject.<>c<TObject,TSignal> <>9
      static void _set_$$9(typename ::Zenject::BindSignalFromBinder_2<TObject, TSignal>::$$c* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename BindSignalFromBinder_2<TObject, TSignal>::$$c*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<TObject>> <>9__5_0
      static ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>* _get_$$9__5_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c::_get_$$9__5_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename BindSignalFromBinder_2<TObject, TSignal>::$$c*>::get(), "<>9__5_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<TObject>> <>9__5_0
      static void _set_$$9__5_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c::_set_$$9__5_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename BindSignalFromBinder_2<TObject, TSignal>::$$c*>::get(), "<>9__5_0", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<TObject>> <>9__6_0
      static ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>* _get_$$9__6_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c::_get_$$9__6_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename BindSignalFromBinder_2<TObject, TSignal>::$$c*>::get(), "<>9__6_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<TObject>> <>9__6_0
      static void _set_$$9__6_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c::_set_$$9__6_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename BindSignalFromBinder_2<TObject, TSignal>::$$c*>::get(), "<>9__6_0", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<TObject>> <>9__7_0
      static ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>* _get_$$9__7_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c::_get_$$9__7_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename BindSignalFromBinder_2<TObject, TSignal>::$$c*>::get(), "<>9__7_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<TObject>> <>9__7_0
      static void _set_$$9__7_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c::_set_$$9__7_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename BindSignalFromBinder_2<TObject, TSignal>::$$c*>::get(), "<>9__7_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename BindSignalFromBinder_2<TObject, TSignal>::$$c*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename BindSignalFromBinder_2<TObject, TSignal>::$$c* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename BindSignalFromBinder_2<TObject, TSignal>::$$c*, creationType>()));
      }
      // System.Void <FromResolve>b__5_0(Zenject.ConcreteBinderGeneric`1<TObject> x)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void $FromResolve$b__5_0(::Zenject::ConcreteBinderGeneric_1<TObject>* x) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c::<FromResolve>b__5_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromResolve>b__5_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, x);
      }
      // System.Void <FromResolveAll>b__6_0(Zenject.ConcreteBinderGeneric`1<TObject> x)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void $FromResolveAll$b__6_0(::Zenject::ConcreteBinderGeneric_1<TObject>* x) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c::<FromResolveAll>b__6_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromResolveAll>b__6_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, x);
      }
      // System.Void <FromNew>b__7_0(Zenject.ConcreteBinderGeneric`1<TObject> x)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void $FromNew$b__7_0(::Zenject::ConcreteBinderGeneric_1<TObject>* x) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c::<FromNew>b__7_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromNew>b__7_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, x);
      }
      // static private System.Object __zenCreate(System.Object[] P_0)
      // Offset: 0xFFFFFFFFFFFFFFFF
      static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c::__zenCreate");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename BindSignalFromBinder_2<TObject, TSignal>::$$c*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
      }
      // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
      // Offset: 0xFFFFFFFFFFFFFFFF
      static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c::__zenCreateInjectTypeInfo");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename BindSignalFromBinder_2<TObject, TSignal>::$$c*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
    }; // Zenject.BindSignalFromBinder`2/Zenject.<>c
    // Could not write size check! Type: Zenject.BindSignalFromBinder`2/Zenject.<>c is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.BindSignalFromBinder`2/Zenject.<>c__DisplayClass8_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass8_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = BindSignalFromBinder_2<TObject, TSignal>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass8_0";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // public System.Object obj
      // Size: 0x8
      // Offset: 0x0
      ::Il2CppObject* obj;
      // Field size check
      static_assert(sizeof(::Il2CppObject*) == 0x8);
      // public Zenject.BindSignalFromBinder`2<TObject,TSignal> <>4__this
      // Size: 0x8
      // Offset: 0x0
      ::Zenject::BindSignalFromBinder_2<TObject, TSignal>* $$4__this;
      // Field size check
      static_assert(sizeof(::Zenject::BindSignalFromBinder_2<TObject, TSignal>*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: public System.Object obj
      [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_obj() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c__DisplayClass8_0::dyn_obj");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "obj"))->offset;
        return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Zenject.BindSignalFromBinder`2<TObject,TSignal> <>4__this
      [[deprecated("Use field access instead!")]] ::Zenject::BindSignalFromBinder_2<TObject, TSignal>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c__DisplayClass8_0::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<::Zenject::BindSignalFromBinder_2<TObject, TSignal>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename BindSignalFromBinder_2<TObject, TSignal>::$$c__DisplayClass8_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c__DisplayClass8_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename BindSignalFromBinder_2<TObject, TSignal>::$$c__DisplayClass8_0*, creationType>()));
      }
      // System.Void <From>b__1(System.Object s)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void $From$b__1(::Il2CppObject* s) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c__DisplayClass8_0::<From>b__1");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<From>b__1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(s)})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, s);
      }
      // static private System.Object __zenCreate(System.Object[] P_0)
      // Offset: 0xFFFFFFFFFFFFFFFF
      static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c__DisplayClass8_0::__zenCreate");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename BindSignalFromBinder_2<TObject, TSignal>::$$c__DisplayClass8_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
      }
      // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
      // Offset: 0xFFFFFFFFFFFFFFFF
      static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::$$c__DisplayClass8_0::__zenCreateInjectTypeInfo");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename BindSignalFromBinder_2<TObject, TSignal>::$$c__DisplayClass8_0*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
    }; // Zenject.BindSignalFromBinder`2/Zenject.<>c__DisplayClass8_0
    // Could not write size check! Type: Zenject.BindSignalFromBinder`2/Zenject.<>c__DisplayClass8_0 is generic, or has no fields that are valid for size checks!
    public:
    // private readonly Zenject.BindStatement _bindStatement
    // Size: 0x8
    // Offset: 0x0
    ::Zenject::BindStatement* bindStatement;
    // Field size check
    static_assert(sizeof(::Zenject::BindStatement*) == 0x8);
    // private readonly System.Func`2<TObject,System.Action`1<TSignal>> _methodGetter
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_2<TObject, ::System::Action_1<TSignal>*>* methodGetter;
    // Field size check
    static_assert(sizeof(::System::Func_2<TObject, ::System::Action_1<TSignal>*>*) == 0x8);
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x0
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // private readonly Zenject.SignalBindingBindInfo _signalBindInfo
    // Size: 0x8
    // Offset: 0x0
    ::Zenject::SignalBindingBindInfo* signalBindInfo;
    // Field size check
    static_assert(sizeof(::Zenject::SignalBindingBindInfo*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private readonly Zenject.BindStatement _bindStatement
    [[deprecated("Use field access instead!")]] ::Zenject::BindStatement*& dyn__bindStatement() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::dyn__bindStatement");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_bindStatement"))->offset;
      return *reinterpret_cast<::Zenject::BindStatement**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Func`2<TObject,System.Action`1<TSignal>> _methodGetter
    [[deprecated("Use field access instead!")]] ::System::Func_2<TObject, ::System::Action_1<TSignal>*>*& dyn__methodGetter() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::dyn__methodGetter");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_methodGetter"))->offset;
      return *reinterpret_cast<::System::Func_2<TObject, ::System::Action_1<TSignal>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Zenject.DiContainer _container
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn__container() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::dyn__container");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_container"))->offset;
      return *reinterpret_cast<::Zenject::DiContainer**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Zenject.SignalBindingBindInfo _signalBindInfo
    [[deprecated("Use field access instead!")]] ::Zenject::SignalBindingBindInfo*& dyn__signalBindInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::dyn__signalBindInfo");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_signalBindInfo"))->offset;
      return *reinterpret_cast<::Zenject::SignalBindingBindInfo**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(Zenject.SignalBindingBindInfo signalBindInfo, Zenject.BindStatement bindStatement, System.Func`2<TObject,System.Action`1<TSignal>> methodGetter, Zenject.DiContainer container)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BindSignalFromBinder_2<TObject, TSignal>* New_ctor(::Zenject::SignalBindingBindInfo* signalBindInfo, ::Zenject::BindStatement* bindStatement, ::System::Func_2<TObject, ::System::Action_1<TSignal>*>* methodGetter, ::Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BindSignalFromBinder_2<TObject, TSignal>*, creationType>(signalBindInfo, bindStatement, methodGetter, container)));
    }
    // public Zenject.SignalCopyBinder FromResolve()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Zenject::SignalCopyBinder* FromResolve() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::FromResolve");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromResolve", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::SignalCopyBinder*, false>(this, ___internal__method);
    }
    // public Zenject.SignalCopyBinder FromResolveAll()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Zenject::SignalCopyBinder* FromResolveAll() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::FromResolveAll");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromResolveAll", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::SignalCopyBinder*, false>(this, ___internal__method);
    }
    // public Zenject.SignalCopyBinder FromNew()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Zenject::SignalCopyBinder* FromNew() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::FromNew");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromNew", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::SignalCopyBinder*, false>(this, ___internal__method);
    }
    // public Zenject.SignalCopyBinder From(System.Action`1<Zenject.ConcreteBinderGeneric`1<TObject>> objectBindCallback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Zenject::SignalCopyBinder* From(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>* objectBindCallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::From");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "From", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(objectBindCallback)})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::SignalCopyBinder*, false>(this, ___internal__method, objectBindCallback);
    }
    // private System.Action`1<System.Object> <From>b__8_0(System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Action_1<::Il2CppObject*>* $From$b__8_0(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::<From>b__8_0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<From>b__8_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Action_1<::Il2CppObject*>*, false>(this, ___internal__method, obj);
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::__zenCreate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BindSignalFromBinder_2<TObject, TSignal>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindSignalFromBinder_2::__zenCreateInjectTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BindSignalFromBinder_2<TObject, TSignal>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Zenject.BindSignalFromBinder`2
  // Could not write size check! Type: Zenject.BindSignalFromBinder`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
