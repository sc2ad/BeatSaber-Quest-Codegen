#pragma once
namespace {
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__IOUtil_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MessageEnum_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::IOUtil.FlagTest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Serialization::Formatters::Binary::MessageEnum, ::System::Runtime::Serialization::Formatters::Binary::MessageEnum)>(&::System::Runtime::Serialization::Formatters::Binary::IOUtil::FlagTest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2354f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::IOUtil>::get(),
                            "FlagTest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::MessageEnum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::MessageEnum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::IOUtil.WriteStringWithCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter)>(&::System::Runtime::Serialization::Formatters::Binary::IOUtil::WriteStringWithCode)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2354f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::IOUtil>::get(),
                            "WriteStringWithCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::IOUtil.WriteWithCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type, ::bs_hook::Il2CppWrapperType, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter)>(&::System::Runtime::Serialization::Formatters::Binary::IOUtil::WriteWithCode)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2354f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::IOUtil>::get(),
                            "WriteWithCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter>::get()}
                        )));
    return ___internal_method;
  }
};
 bool ::System::Runtime::Serialization::Formatters::Binary::IOUtil::FlagTest(::System::Runtime::Serialization::Formatters::Binary::MessageEnum flag, ::System::Runtime::Serialization::Formatters::Binary::MessageEnum target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::IOUtil>::get(),
                            "FlagTest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::MessageEnum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::MessageEnum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, flag, target);
}
 void ::System::Runtime::Serialization::Formatters::Binary::IOUtil::WriteStringWithCode(::StringW value, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::IOUtil>::get(),
                            "WriteStringWithCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, sout);
}
 void ::System::Runtime::Serialization::Formatters::Binary::IOUtil::WriteWithCode(::System::Type type, ::bs_hook::Il2CppWrapperType value, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::IOUtil>::get(),
                            "WriteWithCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, value, sout);
}
} // end anonymous namespace
