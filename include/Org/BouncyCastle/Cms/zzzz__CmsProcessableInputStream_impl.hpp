#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessableInputStream_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsReadable_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsProcessableInputStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsProcessableInputStream::*)(System::IO::Stream)>(&Org::BouncyCastle::Cms::CmsProcessableInputStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1159298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsProcessableInputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsProcessableInputStream.GetInputStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Cms::CmsProcessableInputStream::*)()>(&Org::BouncyCastle::Cms::CmsProcessableInputStream::GetInputStream)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x115a15c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::CmsProcessableInputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsProcessableInputStream>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsProcessableInputStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsProcessableInputStream::*)(System::IO::Stream)>(&Org::BouncyCastle::Cms::CmsProcessableInputStream::Write)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x115a17c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::CmsProcessableInputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsProcessableInputStream>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsProcessableInputStream.GetContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Org::BouncyCastle::Cms::CmsProcessableInputStream::*)()>(&Org::BouncyCastle::Cms::CmsProcessableInputStream::GetContent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x115a204;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::CmsProcessableInputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsProcessableInputStream>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsProcessableInputStream.CheckSingleUsage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsProcessableInputStream::*)()>(&Org::BouncyCastle::Cms::CmsProcessableInputStream::CheckSingleUsage)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x115a210;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::CmsProcessableInputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsProcessableInputStream>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Cms::CmsProcessable
constexpr  Org::BouncyCastle::Cms::CmsProcessableInputStream::operator Org::BouncyCastle::Cms::CmsProcessable() const noexcept {
return Org::BouncyCastle::Cms::CmsProcessable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Org::BouncyCastle::Cms::CmsReadable
constexpr  Org::BouncyCastle::Cms::CmsProcessableInputStream::operator Org::BouncyCastle::Cms::CmsReadable() const noexcept {
return Org::BouncyCastle::Cms::CmsReadable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsProcessableInputStream::__set_input(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream Org::BouncyCastle::Cms::CmsProcessableInputStream::__get_input() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsProcessableInputStream::__set_used(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Cms::CmsProcessableInputStream::__get_used() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Cms::CmsProcessableInputStream Org::BouncyCastle::Cms::CmsProcessableInputStream::New_ctor(System::IO::Stream input)  {
Org::BouncyCastle::Cms::CmsProcessableInputStream o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::CmsProcessableInputStream>(input))};
return o;
}
 void Org::BouncyCastle::Cms::CmsProcessableInputStream::_ctor(System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsProcessableInputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 System::IO::Stream Org::BouncyCastle::Cms::CmsProcessableInputStream::GetInputStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsProcessableInputStream>::get(),
                            "GetInputStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Cms::CmsProcessableInputStream::Write(System::IO::Stream output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsProcessableInputStream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, output);
}
 ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Cms::CmsProcessableInputStream::GetContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsProcessableInputStream>::get(),
                            "GetContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Cms::CmsProcessableInputStream::CheckSingleUsage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsProcessableInputStream>::get(),
                            "CheckSingleUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
