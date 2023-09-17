#pragma once
namespace {
#include "System/Linq/zzzz__IOrderedEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<TElement>
constexpr  ::System::Linq::IOrderedEnumerable_1::operator ::System::Collections::Generic::IEnumerable_1<TElement>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<TElement>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::System::Linq::IOrderedEnumerable_1::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
template<typename TKey>
 ::System::Linq::IOrderedEnumerable_1<TElement> ::System::Linq::IOrderedEnumerable_1::CreateOrderedEnumerable(::System::Func_2<TElement,TKey> keySelector, ::System::Collections::Generic::IComparer_1<TKey> comparer, bool descending)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::IOrderedEnumerable_1>::get(),
                        "CreateOrderedEnumerable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TElement,TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Linq::IOrderedEnumerable_1<TElement>, false>(const_cast<void*>(instance), ___internal_method, keySelector, comparer, descending);
}
} // end anonymous namespace
