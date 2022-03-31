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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataItem
  class BeatmapDataItem;
  // Forward declaring type: ISortedList`1<T>
  template<typename T>
  class ISortedList_1;
  // Forward declaring type: SortedList`2<T, TBase>
  template<typename T, typename TBase>
  class SortedList_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataSortedListForTypes`1<TBase>
  template<typename TBase>
  class BeatmapDataSortedListForTypes_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BeatmapDataSortedListForTypes_1, "", "BeatmapDataSortedListForTypes`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapDataSortedListForTypes`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TBase>
  class BeatmapDataSortedListForTypes_1 : public ::Il2CppObject {
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
    // private readonly System.Collections.Generic.Dictionary`2<System.Type,ISortedList`1<TBase>> _items
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::ISortedList_1<TBase>*>* items;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::ISortedList_1<TBase>*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::ISortedList_1<TBase>*>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::ISortedList_1<TBase>*>*() const noexcept {
      return items;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.Dictionary`2<System.Type,ISortedList`1<TBase>> _items
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::ISortedList_1<TBase>*>*& dyn__items() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataSortedListForTypes_1::dyn__items");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_items"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::ISortedList_1<TBase>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void AddList(SortedList`2<T,TBase> list)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void AddList(::GlobalNamespace::SortedList_2<T, TBase>* list) {
      static_assert(std::is_convertible_v<T, TBase>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataSortedListForTypes_1::AddList");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddList", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, list);
    }
    // public System.Void InsertItem(TBase item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void InsertItem(TBase item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataSortedListForTypes_1::InsertItem");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InsertItem", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void RemoveItem(TBase item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RemoveItem(TBase item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataSortedListForTypes_1::RemoveItem");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveItem", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // public System.Int32 GetCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    int GetCount() {
      static_assert(std::is_convertible_v<T, TBase>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataSortedListForTypes_1::GetCount");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetCount", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___generic__method);
    }
    // public System.Collections.Generic.IEnumerable`1<T> GetItems()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::System::Collections::Generic::IEnumerable_1<T>* GetItems() {
      static_assert(std::is_convertible_v<T, TBase>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataSortedListForTypes_1::GetItems");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetItems", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___generic__method);
    }
    // private ISortedList`1<TBase> GetList(System.Type type)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::ISortedList_1<TBase>* GetList(::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataSortedListForTypes_1::GetList");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetList", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type)})));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::ISortedList_1<TBase>*, false>(this, ___internal__method, type);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataSortedListForTypes_1<TBase>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataSortedListForTypes_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataSortedListForTypes_1<TBase>*, creationType>()));
    }
  }; // BeatmapDataSortedListForTypes`1
  // Could not write size check! Type: BeatmapDataSortedListForTypes`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
