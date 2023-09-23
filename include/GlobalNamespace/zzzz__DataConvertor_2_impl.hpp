#pragma once
#include "GlobalNamespace/zzzz__DataConvertor_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_2_def.hpp"
//  Writing Method size for method: GlobalNamespace::DataConvertor_2.ProcessItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (GlobalNamespace::DataConvertor_2::*)(::bs_hook::Il2CppWrapperType, TParam)>(&GlobalNamespace::DataConvertor_2::ProcessItem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataConvertor_2>::get(),
                            "ProcessItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DataConvertor_2.AddConvertor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DataConvertor_2::*)(GlobalNamespace::DataItemConvertor_2<T,TParam>)>(&GlobalNamespace::DataConvertor_2::AddConvertor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataConvertor_2>::get(),
                            "AddConvertor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DataItemConvertor_2<T,TParam>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DataConvertor_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DataConvertor_2::*)()>(&GlobalNamespace::DataConvertor_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataConvertor_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DataConvertor_2::__set__convertors(System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_2<T,TParam>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_2<T,TParam>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_2<T,TParam>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_2<T,TParam>> GlobalNamespace::DataConvertor_2::__get__convertors() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_2<T,TParam>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 T GlobalNamespace::DataConvertor_2::ProcessItem(::bs_hook::Il2CppWrapperType item, TParam param)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataConvertor_2>::get(),
                            "ProcessItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, item, param);
}
 void GlobalNamespace::DataConvertor_2::AddConvertor(GlobalNamespace::DataItemConvertor_2<T,TParam> dataItemConvertor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataConvertor_2>::get(),
                            "AddConvertor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DataItemConvertor_2<T,TParam>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dataItemConvertor);
}
// Ctor Parameters []
 GlobalNamespace::DataConvertor_2::DataConvertor_2()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DataConvertor_2>())) {}
 void GlobalNamespace::DataConvertor_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataConvertor_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
