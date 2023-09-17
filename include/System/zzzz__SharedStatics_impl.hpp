#pragma once
namespace {
#include "System/zzzz__SharedStatics_def.hpp"
#include "System/Security/Util/zzzz__Tokenizer_def.hpp"
//  Writing Method size for method: ::System::SharedStatics._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::SharedStatics::*)()>(&::System::SharedStatics::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24834c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SharedStatics>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SharedStatics.GetSharedStringMaker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Util::____System__Security__Util__Tokenizer__StringMaker (*)()>(&::System::SharedStatics::GetSharedStringMaker)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x24834c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SharedStatics>::get(),
                            "GetSharedStringMaker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SharedStatics.ReleaseSharedStringMaker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::Security::Util::____System__Security__Util__Tokenizer__StringMaker>)>(&::System::SharedStatics::ReleaseSharedStringMaker)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2483698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SharedStatics>::get(),
                            "ReleaseSharedStringMaker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Security::Util::____System__Security__Util__Tokenizer__StringMaker>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::System::SharedStatics::__set__sharedStatics(::System::SharedStatics value)  {
::cordl_internals::setStaticField<::System::SharedStatics, "_sharedStatics", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SharedStatics>::get>(std::forward<::System::SharedStatics>(value));
}
 ::System::SharedStatics ::System::SharedStatics::__get__sharedStatics()  {
return ::cordl_internals::getStaticField<::System::SharedStatics, "_sharedStatics", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SharedStatics>::get>();
}
constexpr void ::System::SharedStatics::__set__maker(::System::Security::Util::____System__Security__Util__Tokenizer__StringMaker value)  {
::cordl_internals::setInstanceField<::System::Security::Util::____System__Security__Util__Tokenizer__StringMaker, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::Util::____System__Security__Util__Tokenizer__StringMaker>(value));
}
constexpr ::System::Security::Util::____System__Security__Util__Tokenizer__StringMaker ::System::SharedStatics::__get__maker() const {
return ::cordl_internals::getInstanceField<::System::Security::Util::____System__Security__Util__Tokenizer__StringMaker, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::SharedStatics::SharedStatics()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SharedStatics>())) {}
 void ::System::SharedStatics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SharedStatics>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Security::Util::____System__Security__Util__Tokenizer__StringMaker ::System::SharedStatics::GetSharedStringMaker()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SharedStatics>::get(),
                            "GetSharedStringMaker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Util::____System__Security__Util__Tokenizer__StringMaker, false>(nullptr, ___internal_method);
}
 void ::System::SharedStatics::ReleaseSharedStringMaker(ByRef<::System::Security::Util::____System__Security__Util__Tokenizer__StringMaker> maker)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SharedStatics>::get(),
                            "ReleaseSharedStringMaker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Security::Util::____System__Security__Util__Tokenizer__StringMaker>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, maker);
}
} // end anonymous namespace
