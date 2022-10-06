// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Random
  class Random;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ShuffleExtensions
  class ShuffleExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ShuffleExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShuffleExtensions*, "", "ShuffleExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ShuffleExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ShuffleExtensions : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::ShuffleExtensions::$PickRandomElementsWithTombstone$d__1_1<T>
    template<typename T>
    class $PickRandomElementsWithTombstone$d__1_1;
    // Nested type: ::GlobalNamespace::ShuffleExtensions::$TakeWithTombstone$d__2_1<T>
    template<typename T>
    class $TakeWithTombstone$d__2_1;
    // Nested type: ::GlobalNamespace::ShuffleExtensions::$ZipSkipTombstone$d__3_2<T1, T2>
    template<typename T1, typename T2>
    class $ZipSkipTombstone$d__3_2;
    // static public System.Collections.Generic.IEnumerable`1<T> Shuffle(System.Collections.Generic.IEnumerable`1<T> source, System.Random random)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Collections::Generic::IEnumerable_1<T>* Shuffle(::System::Collections::Generic::IEnumerable_1<T>* source, ::System::Random* random) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::Shuffle");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "ShuffleExtensions", "Shuffle", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source), ::il2cpp_utils::ExtractType(random)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, source, random);
    }
    // static public System.Collections.Generic.IEnumerable`1<T> PickRandomElementsWithTombstone(System.Collections.Generic.IEnumerable`1<T> source, System.Int32 limit, System.Int32 count, System.Random random, T tombstone)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Collections::Generic::IEnumerable_1<T>* PickRandomElementsWithTombstone(::System::Collections::Generic::IEnumerable_1<T>* source, int limit, int count, ::System::Random* random, T tombstone) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::PickRandomElementsWithTombstone");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "ShuffleExtensions", "PickRandomElementsWithTombstone", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source), ::il2cpp_utils::ExtractType(limit), ::il2cpp_utils::ExtractType(count), ::il2cpp_utils::ExtractType(random), ::il2cpp_utils::ExtractType(tombstone)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, source, limit, count, random, tombstone);
    }
    // static public System.Collections.Generic.IEnumerable`1<T> TakeWithTombstone(System.Collections.Generic.IEnumerable`1<T> source, System.Int32 limit, T tombstone)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Collections::Generic::IEnumerable_1<T>* TakeWithTombstone(::System::Collections::Generic::IEnumerable_1<T>* source, int limit, T tombstone) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::TakeWithTombstone");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "ShuffleExtensions", "TakeWithTombstone", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source), ::il2cpp_utils::ExtractType(limit), ::il2cpp_utils::ExtractType(tombstone)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, source, limit, tombstone);
    }
    // static public System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<T1,T2>> ZipSkipTombstone(System.Collections.Generic.IEnumerable`1<T1> collection1, System.Collections.Generic.IEnumerable`1<T2> collection2, T2 collection2Tombstone)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T1, class T2>
    static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1, T2>>* ZipSkipTombstone(::System::Collections::Generic::IEnumerable_1<T1>* collection1, ::System::Collections::Generic::IEnumerable_1<T2>* collection2, T2 collection2Tombstone) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShuffleExtensions::ZipSkipTombstone");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "ShuffleExtensions", "ZipSkipTombstone", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(collection1), ::il2cpp_utils::ExtractType(collection2), ::il2cpp_utils::ExtractType(collection2Tombstone)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1, T2>>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, collection1, collection2, collection2Tombstone);
    }
  }; // ShuffleExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShuffleExtensions::Shuffle
// Il2CppName: Shuffle
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::ShuffleExtensions::PickRandomElementsWithTombstone
// Il2CppName: PickRandomElementsWithTombstone
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::ShuffleExtensions::TakeWithTombstone
// Il2CppName: TakeWithTombstone
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::ShuffleExtensions::ZipSkipTombstone
// Il2CppName: ZipSkipTombstone
// Cannot write MetadataGetter for generic methods!
