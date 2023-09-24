#pragma once
#include "System/Linq/zzzz__GroupedEnumerable_3_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Linq::IGrouping_2<TKey,TElement>>
constexpr  System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>::operator System::Collections::Generic::IEnumerable_1<System::Linq::IGrouping_2<TKey,TElement>>() const noexcept {
return System::Collections::Generic::IEnumerable_1<System::Linq::IGrouping_2<TKey,TElement>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>::__set_source(System::Collections::Generic::IEnumerable_1<TSource> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<TSource>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<TSource>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<TSource> System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>::__get_source() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<TSource>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>::__set_keySelector(System::Func_2<TSource,TKey> value)  {
::cordl_internals::setInstanceField<System::Func_2<TSource,TKey>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TSource,TKey>>(value));
}
constexpr System::Func_2<TSource,TKey> System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<System::Func_2<TSource,TKey>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>::__set_elementSelector(System::Func_2<TSource,TElement> value)  {
::cordl_internals::setInstanceField<System::Func_2<TSource,TElement>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TSource,TElement>>(value));
}
constexpr System::Func_2<TSource,TElement> System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>::__get_elementSelector() const {
return ::cordl_internals::getInstanceField<System::Func_2<TSource,TElement>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>::__set_comparer(System::Collections::Generic::IEqualityComparer_1<TKey> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEqualityComparer_1<TKey>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEqualityComparer_1<TKey>>(value));
}
constexpr System::Collections::Generic::IEqualityComparer_1<TKey> System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEqualityComparer_1<TKey>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Linq::GroupedEnumerable_3<TSource,TKey,TElement> System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>::New_ctor(System::Collections::Generic::IEnumerable_1<TSource> source, System::Func_2<TSource,TKey> keySelector, System::Func_2<TSource,TElement> elementSelector, System::Collections::Generic::IEqualityComparer_1<TKey> comparer)  {
System::Linq::GroupedEnumerable_3<TSource,TKey,TElement> o{THROW_UNLESS(::il2cpp_utils::New<System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>>(source, keySelector, elementSelector, comparer))};
return o;
}
 void System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>::_ctor(System::Collections::Generic::IEnumerable_1<TSource> source, System::Func_2<TSource,TKey> keySelector, System::Func_2<TSource,TElement> elementSelector, System::Collections::Generic::IEqualityComparer_1<TKey> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<TSource>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TSource,TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TSource,TElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, keySelector, elementSelector, comparer);
}
 System::Collections::Generic::IEnumerator_1<System::Linq::IGrouping_2<TKey,TElement>> System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<System::Linq::IGrouping_2<TKey,TElement>>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::GroupedEnumerable_3<TSource,TKey,TElement>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
