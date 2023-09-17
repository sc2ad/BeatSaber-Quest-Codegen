#pragma once
#include "GlobalNamespace/zzzz__DataItemConvertor_3_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__DefaultDataConvertor_3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DefaultDataConvertor_3.Convert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TOut (::GlobalNamespace::DefaultDataConvertor_3::*)(TIn)>(&::GlobalNamespace::DefaultDataConvertor_3::Convert)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::DefaultDataConvertor_3),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultDataConvertor_3>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultDataConvertor_3._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DefaultDataConvertor_3::*)()>(&::GlobalNamespace::DefaultDataConvertor_3::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultDataConvertor_3>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 TOut ::GlobalNamespace::DefaultDataConvertor_3::Convert(TIn item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultDataConvertor_3>::get(),
                            "Convert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TIn>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TOut, false>(const_cast<void*>(instance), ___internal_method, item);
}
// Ctor Parameters []
 ::GlobalNamespace::DefaultDataConvertor_3::DefaultDataConvertor_3()  : ::GlobalNamespace::DataItemConvertor_3<TBase,TIn,TOut>(THROW_UNLESS(::il2cpp_utils::New<DefaultDataConvertor_3>())) {}
 void ::GlobalNamespace::DefaultDataConvertor_3::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultDataConvertor_3>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
