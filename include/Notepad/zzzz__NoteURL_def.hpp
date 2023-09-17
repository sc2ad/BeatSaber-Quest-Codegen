#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
// Forward declare root types
namespace Notepad {
struct NoteURL;
}
// Type: Notepad::NoteURL
namespace Notepad {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16092))
// CS Name: Notepad.NoteURL
struct CORDL_TYPE NoteURL : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None }]
constexpr NoteURL(::StringW name, ::StringW url) noexcept;


                    constexpr NoteURL(NoteURL const&) = default;
                    constexpr NoteURL(NoteURL&&) = default;
                    constexpr NoteURL& operator=(NoteURL const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NoteURL& operator=(NoteURL&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NoteURL(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_url, put=__set_url))  url;

constexpr void __set_url(::StringW value) ;

constexpr ::StringW __get_url() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Notepad
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Notepad::NoteURL, "Notepad", "NoteURL");
