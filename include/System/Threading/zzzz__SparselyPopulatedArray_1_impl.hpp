#pragma once
#include "System/Threading/zzzz__SparselyPopulatedArray_1_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayFragment_1_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayAddInfo_1_def.hpp"
constexpr void System::Threading::SparselyPopulatedArray_1<T>::__set__head(System::Threading::SparselyPopulatedArrayFragment_1<T> value)  {
::cordl_internals::setInstanceField<System::Threading::SparselyPopulatedArrayFragment_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::SparselyPopulatedArrayFragment_1<T>>(value));
}
constexpr System::Threading::SparselyPopulatedArrayFragment_1<T> System::Threading::SparselyPopulatedArray_1<T>::__get__head() const {
return ::cordl_internals::getInstanceField<System::Threading::SparselyPopulatedArrayFragment_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::SparselyPopulatedArray_1<T>::__set__tail(System::Threading::SparselyPopulatedArrayFragment_1<T> value)  {
::cordl_internals::setInstanceField<System::Threading::SparselyPopulatedArrayFragment_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::SparselyPopulatedArrayFragment_1<T>>(value));
}
constexpr System::Threading::SparselyPopulatedArrayFragment_1<T> System::Threading::SparselyPopulatedArray_1<T>::__get__tail() const {
return ::cordl_internals::getInstanceField<System::Threading::SparselyPopulatedArrayFragment_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::SparselyPopulatedArray_1<T> System::Threading::SparselyPopulatedArray_1<T>::New_ctor(int32_t initialSize)  {
System::Threading::SparselyPopulatedArray_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::SparselyPopulatedArray_1<T>>(initialSize))};
return o;
}
 void System::Threading::SparselyPopulatedArray_1<T>::_ctor(int32_t initialSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArray_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initialSize);
}
 System::Threading::SparselyPopulatedArrayFragment_1<T> System::Threading::SparselyPopulatedArray_1<T>::get_Tail()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArray_1<T>>::get(),
                            "get_Tail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::SparselyPopulatedArrayFragment_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::SparselyPopulatedArrayAddInfo_1<T> System::Threading::SparselyPopulatedArray_1<T>::Add(T element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArray_1<T>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::SparselyPopulatedArrayAddInfo_1<T>, false>(const_cast<void*>(instance), ___internal_method, element);
}
