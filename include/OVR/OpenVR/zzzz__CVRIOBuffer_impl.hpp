#pragma once
namespace {
#include "OVR/OpenVR/zzzz__CVRIOBuffer_def.hpp"
#include "OVR/OpenVR/zzzz__IVRIOBuffer_def.hpp"
#include "OVR/OpenVR/zzzz__EIOBufferMode_def.hpp"
#include "OVR/OpenVR/zzzz__EIOBufferError_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRIOBuffer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRIOBuffer::*)(::cordl_internals::intptr_t)>(&::OVR::OpenVR::CVRIOBuffer::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x26685d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRIOBuffer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRIOBuffer.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::CVRIOBuffer::*)(::StringW, ::OVR::OpenVR::EIOBufferMode, uint32_t, uint32_t, ByRef<uint64_t>)>(&::OVR::OpenVR::CVRIOBuffer::Open)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26686ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRIOBuffer>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EIOBufferMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRIOBuffer.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::CVRIOBuffer::*)(uint64_t)>(&::OVR::OpenVR::CVRIOBuffer::Close)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2668714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRIOBuffer>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRIOBuffer.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::CVRIOBuffer::*)(uint64_t, ::cordl_internals::intptr_t, uint32_t, ByRef<uint32_t>)>(&::OVR::OpenVR::CVRIOBuffer::Read)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2668738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRIOBuffer>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRIOBuffer.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::CVRIOBuffer::*)(uint64_t, ::cordl_internals::intptr_t, uint32_t)>(&::OVR::OpenVR::CVRIOBuffer::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2668760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRIOBuffer>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRIOBuffer.PropertyContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::CVRIOBuffer::*)(uint64_t)>(&::OVR::OpenVR::CVRIOBuffer::PropertyContainer)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2668784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRIOBuffer>::get(),
                            "PropertyContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::OVR::OpenVR::CVRIOBuffer::__set_FnTable(::OVR::OpenVR::IVRIOBuffer value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::IVRIOBuffer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::OVR::OpenVR::IVRIOBuffer>(value));
}
constexpr ::OVR::OpenVR::IVRIOBuffer ::OVR::OpenVR::CVRIOBuffer::__get_FnTable() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::IVRIOBuffer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::CVRIOBuffer::CVRIOBuffer(::cordl_internals::intptr_t pInterface)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CVRIOBuffer>(pInterface))) {}
 void ::OVR::OpenVR::CVRIOBuffer::_ctor(::cordl_internals::intptr_t pInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRIOBuffer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pInterface);
}
 ::OVR::OpenVR::EIOBufferError ::OVR::OpenVR::CVRIOBuffer::Open(::StringW pchPath, ::OVR::OpenVR::EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements, ByRef<uint64_t> pulBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRIOBuffer>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EIOBufferMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError, false>(const_cast<void*>(instance), ___internal_method, pchPath, mode, unElementSize, unElements, pulBuffer);
}
 ::OVR::OpenVR::EIOBufferError ::OVR::OpenVR::CVRIOBuffer::Close(uint64_t ulBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRIOBuffer>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError, false>(const_cast<void*>(instance), ___internal_method, ulBuffer);
}
 ::OVR::OpenVR::EIOBufferError ::OVR::OpenVR::CVRIOBuffer::Read(uint64_t ulBuffer, ::cordl_internals::intptr_t pDst, uint32_t unBytes, ByRef<uint32_t> punRead)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRIOBuffer>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError, false>(const_cast<void*>(instance), ___internal_method, ulBuffer, pDst, unBytes, punRead);
}
 ::OVR::OpenVR::EIOBufferError ::OVR::OpenVR::CVRIOBuffer::Write(uint64_t ulBuffer, ::cordl_internals::intptr_t pSrc, uint32_t unBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRIOBuffer>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError, false>(const_cast<void*>(instance), ___internal_method, ulBuffer, pSrc, unBytes);
}
 uint64_t ::OVR::OpenVR::CVRIOBuffer::PropertyContainer(uint64_t ulBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRIOBuffer>::get(),
                            "PropertyContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method, ulBuffer);
}
} // end anonymous namespace
