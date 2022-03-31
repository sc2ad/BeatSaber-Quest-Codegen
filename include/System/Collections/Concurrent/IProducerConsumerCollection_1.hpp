// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Collections.Concurrent
namespace System::Collections::Concurrent {
  // Forward declaring type: IProducerConsumerCollection`1<T>
  template<typename T>
  class IProducerConsumerCollection_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::IProducerConsumerCollection_1, "System.Collections.Concurrent", "IProducerConsumerCollection`1");
// Type namespace: System.Collections.Concurrent
namespace System::Collections::Concurrent {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Concurrent.IProducerConsumerCollection`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class IProducerConsumerCollection_1/*, public ::System::Collections::Generic::IEnumerable_1<T>, public ::System::Collections::ICollection*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<T>
    operator ::System::Collections::Generic::IEnumerable_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<T>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // public System.Boolean TryAdd(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryAdd(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Concurrent::IProducerConsumerCollection_1::TryAdd");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryAdd", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Boolean TryTake(out T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryTake(ByRef<T> item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Concurrent::IProducerConsumerCollection_1::TryTake");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryTake", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<T&>()})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, byref(item));
    }
    // public T[] ToArray()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<T> ToArray() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Concurrent::IProducerConsumerCollection_1::ToArray");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ToArray", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method);
    }
  }; // System.Collections.Concurrent.IProducerConsumerCollection`1
  // Could not write size check! Type: System.Collections.Concurrent.IProducerConsumerCollection`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
