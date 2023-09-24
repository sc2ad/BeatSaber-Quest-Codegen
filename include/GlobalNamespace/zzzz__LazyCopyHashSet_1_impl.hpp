#pragma once
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
/// @brief Convert operator to GlobalNamespace::ILazyCopyHashSet_1<T>
constexpr  GlobalNamespace::LazyCopyHashSet_1<T>::operator GlobalNamespace::ILazyCopyHashSet_1<T>() const noexcept {
return GlobalNamespace::ILazyCopyHashSet_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LazyCopyHashSet_1<T>::__set__itemsCopy(System::Collections::Generic::List_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<T>>(value));
}
constexpr System::Collections::Generic::List_1<T> GlobalNamespace::LazyCopyHashSet_1<T>::__get__itemsCopy() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LazyCopyHashSet_1<T>::__set__items(System::Collections::Generic::HashSet_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<T>>(value));
}
constexpr System::Collections::Generic::HashSet_1<T> GlobalNamespace::LazyCopyHashSet_1<T>::__get__items() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LazyCopyHashSet_1<T>::__set__dirty(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LazyCopyHashSet_1<T>::__get__dirty() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::List_1<T> GlobalNamespace::LazyCopyHashSet_1<T>::get_items()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LazyCopyHashSet_1<T>>::get(),
                            "get_items",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::LazyCopyHashSet_1<T> GlobalNamespace::LazyCopyHashSet_1<T>::New_ctor()  {
GlobalNamespace::LazyCopyHashSet_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::LazyCopyHashSet_1<T>>())};
return o;
}
 void GlobalNamespace::LazyCopyHashSet_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LazyCopyHashSet_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::LazyCopyHashSet_1<T> GlobalNamespace::LazyCopyHashSet_1<T>::New_ctor(int32_t capacity)  {
GlobalNamespace::LazyCopyHashSet_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::LazyCopyHashSet_1<T>>(capacity))};
return o;
}
 void GlobalNamespace::LazyCopyHashSet_1<T>::_ctor(int32_t capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LazyCopyHashSet_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, capacity);
}
 void GlobalNamespace::LazyCopyHashSet_1<T>::Add(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LazyCopyHashSet_1<T>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void GlobalNamespace::LazyCopyHashSet_1<T>::Remove(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LazyCopyHashSet_1<T>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
