#pragma once
#include "ENet/zzzz__ArrayPool_def.hpp"
//  Writing Method size for method: ENet::ArrayPool.GetByteBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)()>(&ENet::ArrayPool::GetByteBuffer)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x207cd74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::ArrayPool>::get(),
                            "GetByteBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ENet::ArrayPool.GetPointerBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::cordl_internals::intptr_t> (*)()>(&ENet::ArrayPool::GetPointerBuffer)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x207ce08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::ArrayPool>::get(),
                            "GetPointerBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ENet::ArrayPool::__set_byteBuffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "byteBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::ArrayPool>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> ENet::ArrayPool::__get_byteBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "byteBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::ArrayPool>::get>();
}
 void ENet::ArrayPool::__set_pointerBuffer(::ArrayW<::cordl_internals::intptr_t> value)  {
::cordl_internals::setStaticField<::ArrayW<::cordl_internals::intptr_t>, "pointerBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::ArrayPool>::get>(std::forward<::ArrayW<::cordl_internals::intptr_t>>(value));
}
 ::ArrayW<::cordl_internals::intptr_t> ENet::ArrayPool::__get_pointerBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<::cordl_internals::intptr_t>, "pointerBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::ArrayPool>::get>();
}
 ::ArrayW<uint8_t> ENet::ArrayPool::GetByteBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::ArrayPool>::get(),
                            "GetByteBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method);
}
 ::ArrayW<::cordl_internals::intptr_t> ENet::ArrayPool::GetPointerBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::ArrayPool>::get(),
                            "GetPointerBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::cordl_internals::intptr_t>, false>(nullptr, ___internal_method);
}
