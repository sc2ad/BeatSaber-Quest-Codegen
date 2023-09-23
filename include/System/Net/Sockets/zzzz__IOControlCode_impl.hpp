#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/Sockets/zzzz__IOControlCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::Sockets::IOControlCode::IOControlCode(int64_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::Sockets::IOControlCode::__set_value__(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x0>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Net::Sockets::IOControlCode::__get_value__() const {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->__instance);
}
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::AsyncIO{2147772029};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::NonBlockingIO{2147772030};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::DataToRead{1074030207};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::OobDataRead{1074033415};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::AssociateHandle{2281701377};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::EnableCircularQueuing{671088642};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::Flush{671088644};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::GetBroadcastAddress{1207959557};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::GetExtensionFunctionPointer{3355443206};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::GetQos{3355443207};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::GetGroupQos{3355443208};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::MultipointLoopback{2281701385};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::MulticastScope{2281701386};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::SetQos{2281701387};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::SetGroupQos{2281701388};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::TranslateHandle{3355443213};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::RoutingInterfaceQuery{3355443220};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::RoutingInterfaceChange{2281701397};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::AddressListQuery{1207959574};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::AddressListChange{671088663};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::QueryTargetPnpHandle{1207959576};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::NamespaceChange{2281701401};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::AddressListSort{3355443225};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::ReceiveAll{2550136833};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::ReceiveAllMulticast{2550136834};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::ReceiveAllIgmpMulticast{2550136835};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::KeepAliveValues{2550136836};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::AbsorbRouterAlert{2550136837};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::UnicastInterface{2550136838};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::LimitBroadcasts{2550136839};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::BindToInterface{2550136840};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::MulticastInterface{2550136841};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::AddMulticastGroupOnInterface{2550136842};
constexpr System::Net::Sockets::IOControlCode  System::Net::Sockets::IOControlCode::DeleteMulticastGroupFromInterface{2550136843};
