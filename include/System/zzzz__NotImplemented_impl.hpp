#pragma once
namespace {
#include "System/zzzz__NotImplemented_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::NotImplemented.ByDesignWithMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception (*)(::StringW)>(&::System::NotImplemented::ByDesignWithMessage)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27b4ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::NotImplemented>::get(),
                            "ByDesignWithMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 ::System::Exception ::System::NotImplemented::ByDesignWithMessage(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::NotImplemented>::get(),
                            "ByDesignWithMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception, false>(nullptr, ___internal_method, message);
}
} // end anonymous namespace
