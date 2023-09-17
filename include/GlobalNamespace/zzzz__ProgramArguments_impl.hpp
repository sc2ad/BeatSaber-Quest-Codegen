#pragma once
namespace {
#include "GlobalNamespace/zzzz__ProgramArguments_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProgramArguments.get_arguments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW> (::GlobalNamespace::ProgramArguments::*)()>(&::GlobalNamespace::ProgramArguments::get_arguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a8ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProgramArguments>::get(),
                            "get_arguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgramArguments._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ProgramArguments::*)(::System::Collections::Generic::IReadOnlyList_1<::StringW>)>(&::GlobalNamespace::ProgramArguments::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21a8ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProgramArguments>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgramArguments.Empty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ProgramArguments (*)()>(&::GlobalNamespace::ProgramArguments::Empty)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21a8ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProgramArguments>::get(),
                            "Empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::ProgramArguments::__set__arguments(::System::Collections::Generic::IReadOnlyList_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IReadOnlyList_1<::StringW>>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW> ::GlobalNamespace::ProgramArguments::__get__arguments() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Collections::Generic::IReadOnlyList_1<::StringW> ::GlobalNamespace::ProgramArguments::get_arguments()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProgramArguments>::get(),
                            "get_arguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "arguments", ty: "::System::Collections::Generic::IReadOnlyList_1<::StringW>", modifiers: "", def_value: None }]
 ::GlobalNamespace::ProgramArguments::ProgramArguments(::System::Collections::Generic::IReadOnlyList_1<::StringW> arguments)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ProgramArguments>(arguments))) {}
 void ::GlobalNamespace::ProgramArguments::_ctor(::System::Collections::Generic::IReadOnlyList_1<::StringW> arguments)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProgramArguments>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, arguments);
}
 ::GlobalNamespace::ProgramArguments ::GlobalNamespace::ProgramArguments::Empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProgramArguments>::get(),
                            "Empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProgramArguments, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
