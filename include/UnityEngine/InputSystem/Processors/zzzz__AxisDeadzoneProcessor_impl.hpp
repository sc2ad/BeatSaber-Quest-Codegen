#pragma once
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__AxisDeadzoneProcessor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor.get_minOrDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::*)()>(&UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::get_minOrDefault)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2966190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor>::get(),
                            "get_minOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor.get_maxOrDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::*)()>(&UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::get_maxOrDefault)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2966200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor>::get(),
                            "get_maxOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::*)(float_t, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::Process)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2966270;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::*)()>(&UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::ToString)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x29662d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::*)()>(&UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2966380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::__set_min(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::__get_min() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::__set_max(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::__get_max() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::get_minOrDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor>::get(),
                            "get_minOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::get_maxOrDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor>::get(),
                            "get_maxOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param control: UnityEngine::InputSystem::InputControl (default: csnull)
 float_t UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::Process(float_t value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 ::StringW UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::AxisDeadzoneProcessor()  : UnityEngine::InputSystem::InputProcessor_1<float_t>(THROW_UNLESS(::il2cpp_utils::New<AxisDeadzoneProcessor>())) {}
 void UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Processors::AxisDeadzoneProcessor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
