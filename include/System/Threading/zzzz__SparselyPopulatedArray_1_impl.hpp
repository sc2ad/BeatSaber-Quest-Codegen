#pragma once
#include "System/Threading/zzzz__SparselyPopulatedArray_1_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayAddInfo_1_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayFragment_1_def.hpp"
//  Writing Method size for method: System::Threading::SparselyPopulatedArray_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SparselyPopulatedArray_1::*)(int32_t)>(&System::Threading::SparselyPopulatedArray_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArray_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::SparselyPopulatedArray_1.get_Tail
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::SparselyPopulatedArrayFragment_1<T> (System::Threading::SparselyPopulatedArray_1::*)()>(&System::Threading::SparselyPopulatedArray_1::get_Tail)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArray_1>::get(),
                            "get_Tail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::SparselyPopulatedArray_1.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::SparselyPopulatedArrayAddInfo_1<T> (System::Threading::SparselyPopulatedArray_1::*)(T)>(&System::Threading::SparselyPopulatedArray_1::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArray_1>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::SparselyPopulatedArray_1::__set__head(System::Threading::SparselyPopulatedArrayFragment_1<T> value)  {
::cordl_internals::setInstanceField<System::Threading::SparselyPopulatedArrayFragment_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::SparselyPopulatedArrayFragment_1<T>>(value));
}
constexpr System::Threading::SparselyPopulatedArrayFragment_1<T> System::Threading::SparselyPopulatedArray_1::__get__head() const {
return ::cordl_internals::getInstanceField<System::Threading::SparselyPopulatedArrayFragment_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::SparselyPopulatedArray_1::__set__tail(System::Threading::SparselyPopulatedArrayFragment_1<T> value)  {
::cordl_internals::setInstanceField<System::Threading::SparselyPopulatedArrayFragment_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::SparselyPopulatedArrayFragment_1<T>>(value));
}
constexpr System::Threading::SparselyPopulatedArrayFragment_1<T> System::Threading::SparselyPopulatedArray_1::__get__tail() const {
return ::cordl_internals::getInstanceField<System::Threading::SparselyPopulatedArrayFragment_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "initialSize", ty: "int32_t", modifiers: "", def_value: None }]
 System::Threading::SparselyPopulatedArray_1::SparselyPopulatedArray_1(int32_t initialSize)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SparselyPopulatedArray_1>(initialSize))) {}
 void System::Threading::SparselyPopulatedArray_1::_ctor(int32_t initialSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArray_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initialSize);
}
 System::Threading::SparselyPopulatedArrayFragment_1<T> System::Threading::SparselyPopulatedArray_1::get_Tail()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArray_1>::get(),
                            "get_Tail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::SparselyPopulatedArrayFragment_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::SparselyPopulatedArrayAddInfo_1<T> System::Threading::SparselyPopulatedArray_1::Add(T element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::SparselyPopulatedArray_1>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::SparselyPopulatedArrayAddInfo_1<T>, false>(const_cast<void*>(instance), ___internal_method, element);
}
