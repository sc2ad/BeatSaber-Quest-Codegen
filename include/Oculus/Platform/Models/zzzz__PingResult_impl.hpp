#pragma once
namespace {
#include "Oculus/Platform/Models/zzzz__PingResult_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::PingResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::PingResult::*)(uint64_t, ::System::Nullable_1<uint64_t>)>(&::Oculus::Platform::Models::PingResult::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25a2294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PingResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Models::PingResult.get_ID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::Oculus::Platform::Models::PingResult::*)()>(&::Oculus::Platform::Models::PingResult::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a22d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PingResult>::get(),
                            "get_ID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Models::PingResult.set_ID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::PingResult::*)(uint64_t)>(&::Oculus::Platform::Models::PingResult::set_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a22d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PingResult>::get(),
                            "set_ID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Models::PingResult.get_PingTimeUsec
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::Oculus::Platform::Models::PingResult::*)()>(&::Oculus::Platform::Models::PingResult::get_PingTimeUsec)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25a22e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PingResult>::get(),
                            "get_PingTimeUsec",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Models::PingResult.get_IsTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Oculus::Platform::Models::PingResult::*)()>(&::Oculus::Platform::Models::PingResult::get_IsTimeout)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x25a234c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PingResult>::get(),
                            "get_IsTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Oculus::Platform::Models::PingResult::__set__ID_k__BackingField(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::Oculus::Platform::Models::PingResult::__get__ID_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::PingResult::__set_pingTimeUsec(::System::Nullable_1<uint64_t> value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<uint64_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Nullable_1<uint64_t>>(value));
}
constexpr ::System::Nullable_1<uint64_t> ::Oculus::Platform::Models::PingResult::__get_pingTimeUsec() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<uint64_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "id", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pingTimeUsec", ty: "::System::Nullable_1<uint64_t>", modifiers: "", def_value: None }]
 ::Oculus::Platform::Models::PingResult::PingResult(uint64_t id, ::System::Nullable_1<uint64_t> pingTimeUsec)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PingResult>(id, pingTimeUsec))) {}
 void ::Oculus::Platform::Models::PingResult::_ctor(uint64_t id, ::System::Nullable_1<uint64_t> pingTimeUsec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PingResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, id, pingTimeUsec);
}
 uint64_t ::Oculus::Platform::Models::PingResult::get_ID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PingResult>::get(),
                            "get_ID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Oculus::Platform::Models::PingResult::set_ID(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PingResult>::get(),
                            "set_ID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 uint64_t ::Oculus::Platform::Models::PingResult::get_PingTimeUsec()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PingResult>::get(),
                            "get_PingTimeUsec",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Oculus::Platform::Models::PingResult::get_IsTimeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PingResult>::get(),
                            "get_IsTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
