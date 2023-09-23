#pragma once
#include "System/Net/zzzz__ReceiveState_def.hpp"
#include "System/Net/zzzz__CommandStream_def.hpp"
#include "System/Net/zzzz__ResponseDescription_def.hpp"
//  Writing Method size for method: System::Net::ReceiveState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ReceiveState::*)(System::Net::CommandStream)>(&System::Net::ReceiveState::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x27fd37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ReceiveState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::CommandStream>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::ReceiveState::__set_Resp(System::Net::ResponseDescription value)  {
::cordl_internals::setInstanceField<System::Net::ResponseDescription, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::ResponseDescription>(value));
}
constexpr System::Net::ResponseDescription System::Net::ReceiveState::__get_Resp() const {
return ::cordl_internals::getInstanceField<System::Net::ResponseDescription, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::ReceiveState::__set_ValidThrough(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::ReceiveState::__get_ValidThrough() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::ReceiveState::__set_Buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Net::ReceiveState::__get_Buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::ReceiveState::__set_Connection(System::Net::CommandStream value)  {
::cordl_internals::setInstanceField<System::Net::CommandStream, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::CommandStream>(value));
}
constexpr System::Net::CommandStream System::Net::ReceiveState::__get_Connection() const {
return ::cordl_internals::getInstanceField<System::Net::CommandStream, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "connection", ty: "System::Net::CommandStream", modifiers: "", def_value: None }]
 System::Net::ReceiveState::ReceiveState(System::Net::CommandStream connection)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ReceiveState>(connection))) {}
 void System::Net::ReceiveState::_ctor(System::Net::CommandStream connection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ReceiveState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::CommandStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connection);
}
