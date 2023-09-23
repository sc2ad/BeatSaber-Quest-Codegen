#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsReplayWindow_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow.ShouldDiscard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::*)(int64_t)>(&Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::ShouldDiscard)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xee0718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow>::get(),
                            "ShouldDiscard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow.ReportAuthenticated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::*)(int64_t)>(&Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::ReportAuthenticated)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xee0764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow>::get(),
                            "ReportAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::*)()>(&Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xee2180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::*)()>(&Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xede3b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::__set_mLatestConfirmedSeq(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::__get_mLatestConfirmedSeq() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::__set_mBitmap(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::__get_mBitmap() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::ShouldDiscard(int64_t seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow>::get(),
                            "ShouldDiscard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, seq);
}
 void Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::ReportAuthenticated(int64_t seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow>::get(),
                            "ReportAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seq);
}
 void Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::DtlsReplayWindow()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DtlsReplayWindow>())) {}
 void Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
