#pragma once
#include "GlobalNamespace/zzzz__DataItemConvertor_2_impl.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_4_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: GlobalNamespace::DataItemConvertor_4.get_inputDataType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (GlobalNamespace::DataItemConvertor_4::*)()>(&GlobalNamespace::DataItemConvertor_4::get_inputDataType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::DataItemConvertor_4),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataItemConvertor_4>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DataItemConvertor_4.Convert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TBase (GlobalNamespace::DataItemConvertor_4::*)(::bs_hook::Il2CppWrapperType, TParam)>(&GlobalNamespace::DataItemConvertor_4::Convert)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::DataItemConvertor_4),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataItemConvertor_4>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DataItemConvertor_4.Convert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TOut (GlobalNamespace::DataItemConvertor_4::*)(TIn, TParam)>(&GlobalNamespace::DataItemConvertor_4::Convert)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::DataItemConvertor_4),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataItemConvertor_4>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DataItemConvertor_4._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DataItemConvertor_4::*)()>(&GlobalNamespace::DataItemConvertor_4::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataItemConvertor_4>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Type GlobalNamespace::DataItemConvertor_4::get_inputDataType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataItemConvertor_4>::get(),
                            "get_inputDataType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 TBase GlobalNamespace::DataItemConvertor_4::Convert(::bs_hook::Il2CppWrapperType item, TParam param)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataItemConvertor_4>::get(),
                            "Convert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TBase, false>(const_cast<void*>(instance), ___internal_method, item, param);
}
 TOut GlobalNamespace::DataItemConvertor_4::Convert(TIn item, TParam param)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataItemConvertor_4>::get(),
                            "Convert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TIn>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TOut, false>(const_cast<void*>(instance), ___internal_method, item, param);
}
// Ctor Parameters []
 GlobalNamespace::DataItemConvertor_4::DataItemConvertor_4()  : GlobalNamespace::DataItemConvertor_2<TBase,TParam>(THROW_UNLESS(::il2cpp_utils::New<DataItemConvertor_4>())) {}
 void GlobalNamespace::DataItemConvertor_4::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DataItemConvertor_4>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
