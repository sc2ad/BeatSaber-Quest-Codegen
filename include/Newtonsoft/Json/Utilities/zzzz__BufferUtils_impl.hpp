#pragma once
namespace {
#include "Newtonsoft/Json/Utilities/zzzz__BufferUtils_def.hpp"
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::BufferUtils.RentBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t> (*)(::Newtonsoft::Json::IArrayPool_1<char16_t>, int32_t)>(&::Newtonsoft::Json::Utilities::BufferUtils::RentBuffer)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x24ea87c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::BufferUtils>::get(),
                            "RentBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::IArrayPool_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::BufferUtils.ReturnBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Newtonsoft::Json::IArrayPool_1<char16_t>, ::ArrayW<char16_t>)>(&::Newtonsoft::Json::Utilities::BufferUtils::ReturnBuffer)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x24ea944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::BufferUtils>::get(),
                            "ReturnBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::IArrayPool_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::BufferUtils.EnsureBufferSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t> (*)(::Newtonsoft::Json::IArrayPool_1<char16_t>, int32_t, ::ArrayW<char16_t>)>(&::Newtonsoft::Json::Utilities::BufferUtils::EnsureBufferSize)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x24ea9f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::BufferUtils>::get(),
                            "EnsureBufferSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::IArrayPool_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 ::ArrayW<char16_t> ::Newtonsoft::Json::Utilities::BufferUtils::RentBuffer(::Newtonsoft::Json::IArrayPool_1<char16_t> bufferPool, int32_t minSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::BufferUtils>::get(),
                            "RentBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::IArrayPool_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>, false>(nullptr, ___internal_method, bufferPool, minSize);
}
 void ::Newtonsoft::Json::Utilities::BufferUtils::ReturnBuffer(::Newtonsoft::Json::IArrayPool_1<char16_t> bufferPool, ::ArrayW<char16_t> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::BufferUtils>::get(),
                            "ReturnBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::IArrayPool_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bufferPool, buffer);
}
 ::ArrayW<char16_t> ::Newtonsoft::Json::Utilities::BufferUtils::EnsureBufferSize(::Newtonsoft::Json::IArrayPool_1<char16_t> bufferPool, int32_t size, ::ArrayW<char16_t> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::BufferUtils>::get(),
                            "EnsureBufferSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::IArrayPool_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>, false>(nullptr, ___internal_method, bufferPool, size, buffer);
}
} // end anonymous namespace
