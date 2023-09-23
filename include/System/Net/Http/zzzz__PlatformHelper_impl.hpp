#pragma once
#include "System/Net/Http/zzzz__PlatformHelper_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Net/Http/zzzz__StreamContent_def.hpp"
//  Writing Method size for method: System::Net::Http::PlatformHelper.IsContentHeader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Net::Http::PlatformHelper::IsContentHeader)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x269c9fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::PlatformHelper>::get(),
                            "IsContentHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::PlatformHelper.GetSingleHeaderString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, System::Collections::Generic::IEnumerable_1<::StringW>)>(&System::Net::Http::PlatformHelper::GetSingleHeaderString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x269c730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::PlatformHelper>::get(),
                            "GetSingleHeaderString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::PlatformHelper.CreateStreamContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Http::StreamContent (*)(System::IO::Stream, System::Threading::CancellationToken)>(&System::Net::Http::PlatformHelper::CreateStreamContent)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x269c988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::PlatformHelper>::get(),
                            "CreateStreamContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
 bool System::Net::Http::PlatformHelper::IsContentHeader(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::PlatformHelper>::get(),
                            "IsContentHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, name);
}
 ::StringW System::Net::Http::PlatformHelper::GetSingleHeaderString(::StringW name, System::Collections::Generic::IEnumerable_1<::StringW> values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::PlatformHelper>::get(),
                            "GetSingleHeaderString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, name, values);
}
 System::Net::Http::StreamContent System::Net::Http::PlatformHelper::CreateStreamContent(System::IO::Stream stream, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::PlatformHelper>::get(),
                            "CreateStreamContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Http::StreamContent, false>(nullptr, ___internal_method, stream, cancellationToken);
}
