#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Threading {
class CancellationCallbackInfo;
}
namespace System::Threading {
template<typename T>
struct SparselyPopulatedArrayAddInfo_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Threading {
struct CancellationTokenRegistration;
}
// Type: System.Threading::CancellationTokenRegistration
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2682))
// CS Name: System.Threading.CancellationTokenRegistration
struct CORDL_TYPE CancellationTokenRegistration : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<System::Threading::CancellationTokenRegistration>
constexpr operator  System::IEquatable_1<System::Threading::CancellationTokenRegistration>() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_callbackInfo", ty: "System::Threading::CancellationCallbackInfo", modifiers: "", def_value: None }, CppParam { name: "m_registrationInfo", ty: "System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo>", modifiers: "", def_value: None }]
constexpr CancellationTokenRegistration(System::Threading::CancellationCallbackInfo m_callbackInfo, System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo> m_registrationInfo) noexcept;


                    constexpr CancellationTokenRegistration(CancellationTokenRegistration const&) = default;
                    constexpr CancellationTokenRegistration(CancellationTokenRegistration&&) = default;
                    constexpr CancellationTokenRegistration& operator=(CancellationTokenRegistration const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CancellationTokenRegistration& operator=(CancellationTokenRegistration&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CancellationTokenRegistration(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Threading::CancellationCallbackInfo __declspec(property(get=__get_m_callbackInfo, put=__set_m_callbackInfo))  m_callbackInfo;

constexpr void __set_m_callbackInfo(System::Threading::CancellationCallbackInfo value) ;

constexpr System::Threading::CancellationCallbackInfo __get_m_callbackInfo() const;

 System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo> __declspec(property(get=__get_m_registrationInfo, put=__set_m_registrationInfo))  m_registrationInfo;

constexpr void __set_m_registrationInfo(System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo> value) ;

constexpr System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo> __get_m_registrationInfo() const;


// Methods

/// @brief Method .ctor addr 0x24a4f94 size 0xc virtual false final false
 void _ctor(System::Threading::CancellationCallbackInfo callbackInfo, System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo> registrationInfo) ;

/// @brief Method Unregister addr 0x24a4fa0 size 0x7c virtual false final false
 bool Unregister() ;

/// @brief Method Dispose addr 0x24a501c size 0x94 virtual true final true
 void Dispose() ;

/// @brief Method Equals addr 0x24a5130 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x24a51c0 size 0x80 virtual true final true
 bool Equals(System::Threading::CancellationTokenRegistration other) ;

/// @brief Method GetHashCode addr 0x24a5240 size 0x90 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE(System::Threading::CancellationTokenRegistration, "System.Threading", "CancellationTokenRegistration");
