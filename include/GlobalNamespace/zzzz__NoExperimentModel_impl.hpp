#pragma once
namespace {
#include "GlobalNamespace/zzzz__NoExperimentModel_def.hpp"
#include "GlobalNamespace/zzzz__IExperimentModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__IExperimentData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoExperimentModel.IsEmployee
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool> (::GlobalNamespace::NoExperimentModel::*)()>(&::GlobalNamespace::NoExperimentModel::IsEmployee)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21bf7e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoExperimentModel>::get(),
                            "IsEmployee",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoExperimentModel.IsInTest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool> (::GlobalNamespace::NoExperimentModel::*)(::GlobalNamespace::IExperimentData)>(&::GlobalNamespace::NoExperimentModel::IsInTest)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21bf848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoExperimentModel>::get(),
                            "IsInTest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IExperimentData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoExperimentModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoExperimentModel::*)()>(&::GlobalNamespace::NoExperimentModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bf8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoExperimentModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IExperimentModel
constexpr  ::GlobalNamespace::NoExperimentModel::operator ::GlobalNamespace::IExperimentModel() const noexcept {
return ::GlobalNamespace::IExperimentModel(::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Threading::Tasks::Task_1<bool> ::GlobalNamespace::NoExperimentModel::IsEmployee()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoExperimentModel>::get(),
                            "IsEmployee",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<bool> ::GlobalNamespace::NoExperimentModel::IsInTest(::GlobalNamespace::IExperimentData data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoExperimentModel>::get(),
                            "IsInTest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IExperimentData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>, false>(const_cast<void*>(instance), ___internal_method, data);
}
// Ctor Parameters []
 ::GlobalNamespace::NoExperimentModel::NoExperimentModel()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NoExperimentModel>())) {}
 void ::GlobalNamespace::NoExperimentModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoExperimentModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
