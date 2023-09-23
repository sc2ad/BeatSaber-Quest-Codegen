#pragma once
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: System::Collections::Generic::IReadOnlyList_1.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (System::Collections::Generic::IReadOnlyList_1::*)(int32_t)>(&System::Collections::Generic::IReadOnlyList_1::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Generic::IReadOnlyList_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::IReadOnlyList_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr  System::Collections::Generic::IReadOnlyList_1::operator System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept {
return System::Collections::Generic::IReadOnlyCollection_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  System::Collections::Generic::IReadOnlyList_1::operator System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Collections::Generic::IReadOnlyList_1::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
 T System::Collections::Generic::IReadOnlyList_1::get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::IReadOnlyList_1>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, index);
}
