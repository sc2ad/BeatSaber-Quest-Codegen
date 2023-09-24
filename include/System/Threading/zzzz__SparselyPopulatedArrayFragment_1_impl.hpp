#pragma once
#include "System/Threading/zzzz__SparselyPopulatedArrayFragment_1_def.hpp"
constexpr void System::Threading::SparselyPopulatedArrayFragment_1<T>::__set__elements(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> System::Threading::SparselyPopulatedArrayFragment_1<T>::__get__elements() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::SparselyPopulatedArrayFragment_1<T>::__set__freeCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::SparselyPopulatedArrayFragment_1<T>::__get__freeCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::SparselyPopulatedArrayFragment_1<T>::__set__next(System::Threading::SparselyPopulatedArrayFragment_1<T> value)  {
::cordl_internals::setInstanceField<System::Threading::SparselyPopulatedArrayFragment_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::SparselyPopulatedArrayFragment_1<T>>(value));
}
constexpr System::Threading::SparselyPopulatedArrayFragment_1<T> System::Threading::SparselyPopulatedArrayFragment_1<T>::__get__next() const {
return ::cordl_internals::getInstanceField<System::Threading::SparselyPopulatedArrayFragment_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::SparselyPopulatedArrayFragment_1<T>::__set__prev(System::Threading::SparselyPopulatedArrayFragment_1<T> value)  {
::cordl_internals::setInstanceField<System::Threading::SparselyPopulatedArrayFragment_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::SparselyPopulatedArrayFragment_1<T>>(value));
}
constexpr System::Threading::SparselyPopulatedArrayFragment_1<T> System::Threading::SparselyPopulatedArrayFragment_1<T>::__get__prev() const {
return ::cordl_internals::getInstanceField<System::Threading::SparselyPopulatedArrayFragment_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::SparselyPopulatedArrayFragment_1<T> System::Threading::SparselyPopulatedArrayFragment_1<T>::New_ctor(int32_t size)  {
System::Threading::SparselyPopulatedArrayFragment_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::SparselyPopulatedArrayFragment_1<T>>(size))};
return o;
}
 void System::Threading::SparselyPopulatedArrayFragment_1<T>::_ctor(int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArrayFragment_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, size);
}
 System::Threading::SparselyPopulatedArrayFragment_1<T> System::Threading::SparselyPopulatedArrayFragment_1<T>::New_ctor(int32_t size, System::Threading::SparselyPopulatedArrayFragment_1<T> prev)  {
System::Threading::SparselyPopulatedArrayFragment_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::SparselyPopulatedArrayFragment_1<T>>(size, prev))};
return o;
}
 void System::Threading::SparselyPopulatedArrayFragment_1<T>::_ctor(int32_t size, System::Threading::SparselyPopulatedArrayFragment_1<T> prev)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArrayFragment_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::SparselyPopulatedArrayFragment_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, size, prev);
}
 T System::Threading::SparselyPopulatedArrayFragment_1<T>::get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArrayFragment_1<T>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, index);
}
 int32_t System::Threading::SparselyPopulatedArrayFragment_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArrayFragment_1<T>>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::SparselyPopulatedArrayFragment_1<T> System::Threading::SparselyPopulatedArrayFragment_1<T>::get_Prev()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArrayFragment_1<T>>::get(),
                            "get_Prev",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::SparselyPopulatedArrayFragment_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 T System::Threading::SparselyPopulatedArrayFragment_1<T>::SafeAtomicRemove(int32_t index, T expectedElement)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArrayFragment_1<T>>::get(),
                            "SafeAtomicRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, index, expectedElement);
}
