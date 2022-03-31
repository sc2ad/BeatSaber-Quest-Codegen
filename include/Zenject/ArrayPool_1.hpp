// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.StaticMemoryPoolBaseBase`1
#include "Zenject/StaticMemoryPoolBaseBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ArrayPool`1<T>
  template<typename T>
  class ArrayPool_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ArrayPool_1, "Zenject", "ArrayPool`1");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.ArrayPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ArrayPool_1 : public ::Zenject::StaticMemoryPoolBaseBase_1<::ArrayW<T>> {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Int32 _length
    // Size: 0x4
    // Offset: 0x0
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return length;
    }
    // Autogenerated static field getter
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Int32,Zenject.ArrayPool`1<T>> _pools
    static ::System::Collections::Generic::Dictionary_2<int, ::Zenject::ArrayPool_1<T>*>* _get__pools() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ArrayPool_1::_get__pools");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Collections::Generic::Dictionary_2<int, ::Zenject::ArrayPool_1<T>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayPool_1<T>*>::get(), "_pools")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Int32,Zenject.ArrayPool`1<T>> _pools
    static void _set__pools(::System::Collections::Generic::Dictionary_2<int, ::Zenject::ArrayPool_1<T>*>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ArrayPool_1::_set__pools");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayPool_1<T>*>::get(), "_pools", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Int32 _length
    int& dyn__length() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ArrayPool_1::dyn__length");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_length"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Int32 length)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayPool_1<T>* New_ctor(int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ArrayPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayPool_1<T>*, creationType>(length)));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ArrayPool_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayPool_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // static private System.Void OnDespawned(T[] arr)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void OnDespawned(::ArrayW<T> arr) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ArrayPool_1::OnDespawned");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayPool_1<T>*>::get(), "OnDespawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arr)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, arr);
    }
    // public T[] Spawn()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<T> Spawn() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ArrayPool_1::Spawn");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Spawn", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method);
    }
    // protected T[] Alloc()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<T> Alloc() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ArrayPool_1::Alloc");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Alloc", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method);
    }
    // static public Zenject.ArrayPool`1<T> GetPool(System.Int32 length)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Zenject::ArrayPool_1<T>* GetPool(int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ArrayPool_1::GetPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayPool_1<T>*>::get(), "GetPool", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(length)})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::ArrayPool_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, length);
    }
  }; // Zenject.ArrayPool`1
  // Could not write size check! Type: Zenject.ArrayPool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
