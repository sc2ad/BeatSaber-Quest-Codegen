#pragma once
namespace {
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::System::Collections::Generic::IReadOnlyDictionary_2.TryGetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::IReadOnlyDictionary_2::*)(TKey, ByRef<TValue>)>(&::System::Collections::Generic::IReadOnlyDictionary_2::TryGetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::IReadOnlyDictionary_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IReadOnlyDictionary_2>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::IReadOnlyDictionary_2.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (::System::Collections::Generic::IReadOnlyDictionary_2::*)(TKey)>(&::System::Collections::Generic::IReadOnlyDictionary_2::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::IReadOnlyDictionary_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IReadOnlyDictionary_2>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr  ::System::Collections::Generic::IReadOnlyDictionary_2::operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept {
return ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr  ::System::Collections::Generic::IReadOnlyDictionary_2::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::System::Collections::Generic::IReadOnlyDictionary_2::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
 bool ::System::Collections::Generic::IReadOnlyDictionary_2::TryGetValue(TKey key, ByRef<TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IReadOnlyDictionary_2>::get(),
                            "TryGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 TValue ::System::Collections::Generic::IReadOnlyDictionary_2::get_Item(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IReadOnlyDictionary_2>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key);
}
} // end anonymous namespace
