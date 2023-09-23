#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSpaceUser;
}
// Type: ::OVRSpaceUser
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8854))
// CS Name: OVRSpaceUser
struct CORDL_TYPE OVRSpaceUser : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "_handle", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr OVRSpaceUser(uint64_t _handle) noexcept;


                    constexpr OVRSpaceUser(OVRSpaceUser const&) = default;
                    constexpr OVRSpaceUser(OVRSpaceUser&&) = default;
                    constexpr OVRSpaceUser& operator=(OVRSpaceUser const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVRSpaceUser& operator=(OVRSpaceUser&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVRSpaceUser(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get__handle, put=__set__handle))  _handle;

constexpr void __set__handle(uint64_t value) ;

constexpr uint64_t __get__handle() const;


// Properties

 bool __declspec(property(get=get_Valid))  Valid;

 uint64_t __declspec(property(get=get_Id))  Id;


// Methods

/// @brief Method get_Valid addr 0x2612914 size 0x28 virtual false final false
 bool get_Valid() ;

/// @brief Method .ctor addr 0x261293c size 0x68 virtual false final false
 void _ctor(uint64_t spaceUserId) ;

/// @brief Method get_Id addr 0x260f528 size 0x7c virtual false final false
 uint64_t get_Id() ;

/// @brief Method Dispose addr 0x26129a4 size 0x64 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSpaceUser, "", "OVRSpaceUser");
