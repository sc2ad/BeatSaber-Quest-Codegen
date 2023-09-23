#pragma once
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::IArrayPool_1.Rent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<T> (Newtonsoft::Json::IArrayPool_1::*)(int32_t)>(&Newtonsoft::Json::IArrayPool_1::Rent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::IArrayPool_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::IArrayPool_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::IArrayPool_1.Return
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::IArrayPool_1::*)(::ArrayW<T>)>(&Newtonsoft::Json::IArrayPool_1::Return)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::IArrayPool_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::IArrayPool_1>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 ::ArrayW<T> Newtonsoft::Json::IArrayPool_1::Rent(int32_t minimumLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::IArrayPool_1>::get(),
                            "Rent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(instance), ___internal_method, minimumLength);
}
 void Newtonsoft::Json::IArrayPool_1::Return(::ArrayW<T> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::IArrayPool_1>::get(),
                            "Return",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array);
}
