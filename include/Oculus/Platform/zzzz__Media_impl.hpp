#pragma once
namespace {
#include "Oculus/Platform/zzzz__Media_def.hpp"
#include "Oculus/Platform/zzzz__MediaContentType_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__ShareMediaResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Media.ShareToFacebook
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ShareMediaResult> (*)(::StringW, ::StringW, ::Oculus::Platform::MediaContentType)>(&::Oculus::Platform::Media::ShareToFacebook)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x259631c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Media>::get(),
                            "ShareToFacebook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MediaContentType>::get()}
                        )));
    return ___internal_method;
  }
};
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ShareMediaResult> ::Oculus::Platform::Media::ShareToFacebook(::StringW postTextSuggestion, ::StringW filePath, ::Oculus::Platform::MediaContentType contentType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Media>::get(),
                            "ShareToFacebook",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MediaContentType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ShareMediaResult>, false>(nullptr, ___internal_method, postTextSuggestion, filePath, contentType);
}
} // end anonymous namespace
