#pragma once
#include "System/Text/zzzz__EncoderFallback_impl.hpp"
namespace {
#include "System/Xml/zzzz__CharEntityEncoderFallback_def.hpp"
#include "System/Xml/zzzz__CharEntityEncoderFallbackBuffer_def.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::CharEntityEncoderFallback::*)()>(&::System::Xml::CharEntityEncoderFallback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26bc060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::CharEntityEncoderFallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallback.CreateFallbackBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::EncoderFallbackBuffer (::System::Xml::CharEntityEncoderFallback::*)()>(&::System::Xml::CharEntityEncoderFallback::CreateFallbackBuffer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26bc068;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::CharEntityEncoderFallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::CharEntityEncoderFallback>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallback.get_MaxCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::CharEntityEncoderFallback::*)()>(&::System::Xml::CharEntityEncoderFallback::get_MaxCharCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26bc148;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::CharEntityEncoderFallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::CharEntityEncoderFallback>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallback.set_StartOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::CharEntityEncoderFallback::*)(int32_t)>(&::System::Xml::CharEntityEncoderFallback::set_StartOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26bc150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::CharEntityEncoderFallback>::get(),
                            "set_StartOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallback.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::CharEntityEncoderFallback::*)(::ArrayW<int32_t>, int32_t)>(&::System::Xml::CharEntityEncoderFallback::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26bc158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::CharEntityEncoderFallback>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::CharEntityEncoderFallback.CanReplaceAt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::CharEntityEncoderFallback::*)(int32_t)>(&::System::Xml::CharEntityEncoderFallback::CanReplaceAt)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26bc164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::CharEntityEncoderFallback>::get(),
                            "CanReplaceAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Xml::CharEntityEncoderFallback::__set_fallbackBuffer(::System::Xml::CharEntityEncoderFallbackBuffer value)  {
::cordl_internals::setInstanceField<::System::Xml::CharEntityEncoderFallbackBuffer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::CharEntityEncoderFallbackBuffer>(value));
}
constexpr ::System::Xml::CharEntityEncoderFallbackBuffer ::System::Xml::CharEntityEncoderFallback::__get_fallbackBuffer() const {
return ::cordl_internals::getInstanceField<::System::Xml::CharEntityEncoderFallbackBuffer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::CharEntityEncoderFallback::__set_textContentMarks(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::System::Xml::CharEntityEncoderFallback::__get_textContentMarks() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::CharEntityEncoderFallback::__set_endMarkPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::CharEntityEncoderFallback::__get_endMarkPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::CharEntityEncoderFallback::__set_curMarkPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::CharEntityEncoderFallback::__get_curMarkPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::CharEntityEncoderFallback::__set_startOffset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::CharEntityEncoderFallback::__get_startOffset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Xml::CharEntityEncoderFallback::CharEntityEncoderFallback()  : ::System::Text::EncoderFallback(THROW_UNLESS(::il2cpp_utils::New<CharEntityEncoderFallback>())) {}
 void ::System::Xml::CharEntityEncoderFallback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::CharEntityEncoderFallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Text::EncoderFallbackBuffer ::System::Xml::CharEntityEncoderFallback::CreateFallbackBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::CharEntityEncoderFallback>::get(),
                            "CreateFallbackBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::EncoderFallbackBuffer, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Xml::CharEntityEncoderFallback::get_MaxCharCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::CharEntityEncoderFallback>::get(),
                            "get_MaxCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Xml::CharEntityEncoderFallback::set_StartOffset(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::CharEntityEncoderFallback>::get(),
                            "set_StartOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Xml::CharEntityEncoderFallback::Reset(::ArrayW<int32_t> textContentMarks, int32_t endMarkPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::CharEntityEncoderFallback>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, textContentMarks, endMarkPos);
}
 bool ::System::Xml::CharEntityEncoderFallback::CanReplaceAt(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::CharEntityEncoderFallback>::get(),
                            "CanReplaceAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, index);
}
} // end anonymous namespace
