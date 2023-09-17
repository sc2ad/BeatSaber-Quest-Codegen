#pragma once
namespace {
#include "System/Runtime/Remoting/Activation/zzzz__ConstructionLevelActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ConstructionLevelActivator.get_NextActivator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IActivator (::System::Runtime::Remoting::Activation::ConstructionLevelActivator::*)()>(&::System::Runtime::Remoting::Activation::ConstructionLevelActivator::get_NextActivator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2338d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ConstructionLevelActivator>::get(),
                            "get_NextActivator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ConstructionLevelActivator.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IConstructionReturnMessage (::System::Runtime::Remoting::Activation::ConstructionLevelActivator::*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage)>(&::System::Runtime::Remoting::Activation::ConstructionLevelActivator::Activate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2338d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ConstructionLevelActivator>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ConstructionLevelActivator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Activation::ConstructionLevelActivator::*)()>(&::System::Runtime::Remoting::Activation::ConstructionLevelActivator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23380e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ConstructionLevelActivator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::Remoting::Activation::IActivator
constexpr  ::System::Runtime::Remoting::Activation::ConstructionLevelActivator::operator ::System::Runtime::Remoting::Activation::IActivator() const noexcept {
return ::System::Runtime::Remoting::Activation::IActivator(::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Runtime::Remoting::Activation::IActivator ::System::Runtime::Remoting::Activation::ConstructionLevelActivator::get_NextActivator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ConstructionLevelActivator>::get(),
                            "get_NextActivator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IActivator, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Runtime::Remoting::Activation::IConstructionReturnMessage ::System::Runtime::Remoting::Activation::ConstructionLevelActivator::Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ConstructionLevelActivator>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IConstructionReturnMessage, false>(const_cast<void*>(instance), ___internal_method, msg);
}
// Ctor Parameters []
 ::System::Runtime::Remoting::Activation::ConstructionLevelActivator::ConstructionLevelActivator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ConstructionLevelActivator>())) {}
 void ::System::Runtime::Remoting::Activation::ConstructionLevelActivator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ConstructionLevelActivator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
